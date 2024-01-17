def generate(rule_name, label= ""):
    label= rule_name if label == "" else label 
    rule_name = rule_name.capitalize()
    return """
class {rule_name}Node : public AstNode {{
private:
   std::vector<AstNode*> next;

public:
   {rule_name}Node(const std::string& name) {{
       this->name = name+std::to_string(i);
       this->label = "{label}"+std::to_string(i++);
   }}

   void add(AstNode* node) override {{
       next.push_back(node);
   }}

   void print() const override {{
       std::cout << \"\\t\" << name << \" [label=\\\"\" << label << \"\\\"]\" << std::endl;
       for (const auto& stmt : next) {{
           std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
           stmt->print();
       }}
   }}

   ~{rule_name}Node() {{
       for (const auto& stmt : next) {{
           delete stmt;
       }}
   }}
}};
   """.format(rule_name=rule_name, label=label)


with open('classes_names.txt', 'r') as file:
   lines = [line.rstrip('\n') for line in file]
for line in lines:
    print(generate(line))
