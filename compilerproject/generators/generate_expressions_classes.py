def generate(rule_name, label= ""):
    label= rule_name if label == "" else label 
    rule_name = rule_name.capitalize()
    return """
class {rule_name}ExpressionNode : public AstNode {{
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    {rule_name}ExpressionNode(){{
        id = i++;
        label = "{rule_name}";
        name = label + std::to_string(id);
    }}
   void add(AstNode* node) override {{
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "{rule_name} already has two children." << std::endl;
   }}

   void print() const override {{
        std::cout << "\\t" << name << " [label=\\"" << label << "\\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }}

   ~{rule_name}ExpressionNode() {{
        delete left;
        delete right;
   }}
}};
   """.format(rule_name=rule_name, label=label)


with open('expressions_names.txt', 'r') as file:
   lines = [line.rstrip('\n') for line in file]
for line in lines:
    print(generate(line))
