#ifndef AST_NODE_H
#define AST_NODE_H
#include <iostream>
#include <vector>
#include <string>
// #include <stdlib.h>

// Abstract base class for AST nodes
class AstNode
{
public:
   static int i; // Declare the static variable
   std::string name = "undefined"; // String member variable with default value
   std::string label = "undefined";
   virtual void add(AstNode *node) = 0;
   virtual void print() const = 0;
   virtual ~AstNode() {}
};

/***************************************************************************************************/

class FileNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    FileNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "file" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~FileNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class StatementsNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    StatementsNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statements" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~StatementsNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class StatementNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    StatementNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statement" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~StatementNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Simple_stmtsNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Simple_stmtsNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "simple_stmts" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Simple_stmtsNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class New_lines_plusNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    New_lines_plusNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "new_lines_plus" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~New_lines_plusNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class IdentifiersNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    IdentifiersNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "identifiers" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~IdentifiersNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class ConstantNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    ConstantNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "constant" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~ConstantNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class AtomNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    AtomNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "atom" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~AtomNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Simple_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Simple_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "simple_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Simple_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class ExpressionNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    ExpressionNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "expression" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~ExpressionNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Assign_statementNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Assign_statementNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "assign_statement" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Assign_statementNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Global_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Global_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "global_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Global_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Nonlocal_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Nonlocal_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "nonlocal_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Nonlocal_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Yield_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Yield_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "yield_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Yield_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Break_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Break_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "break_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Break_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Continue_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Continue_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "continue_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Continue_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Func_callNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Func_callNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "func_call" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Func_callNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Parameters_Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Parameters_Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "parameters_" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Parameters_Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class ParametersNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    ParametersNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "parameters" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~ParametersNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class ParameterNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    ParameterNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "parameter" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~ParameterNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Return_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Return_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "return_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Return_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Compound_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Compound_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "compound_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Compound_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class BlockNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    BlockNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "block" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~BlockNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class If_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    If_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "if_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~If_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class If_headerNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    If_headerNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "if_header" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~If_headerNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Elif_else_Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Elif_else_Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "elif_else_" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Elif_else_Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Elif_elseNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Elif_elseNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "elif_else" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Elif_elseNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Else_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Else_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "else_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Else_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Elif_stmtsNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Elif_stmtsNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "elif_stmts" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Elif_stmtsNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Elif_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Elif_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "elif_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Elif_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Elif_headerNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Elif_headerNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "elif_header" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Elif_headerNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Match_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Match_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "match_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Match_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class CasesNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    CasesNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "cases" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~CasesNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class CaseNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    CaseNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "case" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~CaseNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Block_iterationNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Block_iterationNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "block_iteration" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Block_iterationNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Statements_iterationNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Statements_iterationNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statements_iteration" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Statements_iterationNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Statement_iterationNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Statement_iterationNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statement_iteration" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Statement_iterationNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class While_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    While_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "while_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~While_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class For_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    For_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "for_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~For_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class For_headerNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    For_headerNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "for_header" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~For_headerNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Block_funcNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Block_funcNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "block_func" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Block_funcNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Statements_funcNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Statements_funcNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statements_func" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Statements_funcNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Statement_funcNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Statement_funcNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "statement_func" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Statement_funcNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Func_defNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Func_defNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "func_def" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Func_defNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_parameters_Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_parameters_Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_parameters_" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_parameters_Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_parameter_starNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_parameter_starNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_parameter_star" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_parameter_starNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_parameter_star2Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_parameter_star2Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_parameter_star2" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_parameter_star2Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_parametersNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_parametersNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_parameters" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_parametersNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_parameterNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_parameterNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_parameter" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_parameterNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Fun_generic_identifire_Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Fun_generic_identifire_Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "fun_generic_identifire_" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Fun_generic_identifire_Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Fun_generic_identifireNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Fun_generic_identifireNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "fun_generic_identifire" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Fun_generic_identifireNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class With_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    With_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "with_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~With_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Try_exceptNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Try_exceptNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "try_except" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Try_exceptNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class TryNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    TryNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "try" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~TryNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class ExceptNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    ExceptNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "except" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~ExceptNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_class_stmtNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_class_stmtNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_class_stmt" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_class_stmtNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Def_class_rowNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Def_class_rowNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "def_class_row" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Def_class_rowNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Generic_identifires_Node : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Generic_identifires_Node(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "generic_identifires_" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Generic_identifires_Node()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Generic_identifiresNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Generic_identifiresNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "generic_identifires" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Generic_identifiresNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Generic_identifireNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Generic_identifireNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "generic_identifire" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Generic_identifireNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Plus_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Plus_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "PLUS_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Plus_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Minus_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Minus_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "MINUS_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Minus_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Divide_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Divide_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "DIVIDE_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Divide_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Modulo_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Modulo_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "MODULO_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Modulo_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Multiply_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Multiply_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "MULTIPLY_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Multiply_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Exponentiate_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Exponentiate_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "EXPONENTIATE_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Exponentiate_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Floor_divide_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Floor_divide_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "FLOOR_DIVIDE_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Floor_divide_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Right_shift_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Right_shift_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "RIGHT_SHIFT_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Right_shift_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Left_shift_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Left_shift_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "LEFT_SHIFT_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Left_shift_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Bitwise_and_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Bitwise_and_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "BITWISE_AND_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Bitwise_and_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Bitwise_negation_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Bitwise_negation_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "BITWISE_NEGATION_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Bitwise_negation_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Bitwise_or_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Bitwise_or_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "BITWISE_OR_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Bitwise_or_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class Bitwise_xor_equalNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    Bitwise_xor_equalNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "BITWISE_XOR_EQUAL" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~Bitwise_xor_equalNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class EqualsNode : public AstNode
{
private:
    std::vector<AstNode *> next;

public:
    EqualsNode(const std::string &name)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = "EQUALS" + std::to_string(AstNode::i++);
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        for (const auto &stmt : next)
        {
            std::cout << "	" << name << " -> " << stmt->name << ";" << std::endl;
            stmt->print();
        }
    }

    ~EqualsNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

/**************************************************************************************************/
/**********************************************************************************************/


class NotExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    NotExpressionNode(){
        id = i++;
        label = "Not";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Not already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~NotExpressionNode() {
        delete left;
        delete right;
   }
};
   

class PlusExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    PlusExpressionNode(){
        id = i++;
        label = "Plus";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Plus already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~PlusExpressionNode() {
        delete left;
        delete right;
   }
};
   

class MinusExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    MinusExpressionNode(){
        id = i++;
        label = "Minus";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Minus already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~MinusExpressionNode() {
        delete left;
        delete right;
   }
};
   

class MultiplyExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    MultiplyExpressionNode(){
        id = i++;
        label = "Multiply";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Multiply already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~MultiplyExpressionNode() {
        delete left;
        delete right;
   }
};
   

class DivideExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    DivideExpressionNode(){
        id = i++;
        label = "Divide";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Divide already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~DivideExpressionNode() {
        delete left;
        delete right;
   }
};
   

class ModuloExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    ModuloExpressionNode(){
        id = i++;
        label = "Modulo";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Modulo already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~ModuloExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Floor_divideExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Floor_divideExpressionNode(){
        id = i++;
        label = "Floor_divide";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Floor_divide already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Floor_divideExpressionNode() {
        delete left;
        delete right;
   }
};
   

class ExponentiateExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    ExponentiateExpressionNode(){
        id = i++;
        label = "Exponentiate";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Exponentiate already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~ExponentiateExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Bitwise_andExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Bitwise_andExpressionNode(){
        id = i++;
        label = "Bitwise_and";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Bitwise_and already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Bitwise_andExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Bitwise_negationExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Bitwise_negationExpressionNode(){
        id = i++;
        label = "Bitwise_negation";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Bitwise_negation already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Bitwise_negationExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Bitwise_orExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Bitwise_orExpressionNode(){
        id = i++;
        label = "Bitwise_or";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Bitwise_or already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Bitwise_orExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Bitwise_xorExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Bitwise_xorExpressionNode(){
        id = i++;
        label = "Bitwise_xor";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Bitwise_xor already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Bitwise_xorExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Left_shiftExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Left_shiftExpressionNode(){
        id = i++;
        label = "Left_shift";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Left_shift already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Left_shiftExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Right_shiftExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Right_shiftExpressionNode(){
        id = i++;
        label = "Right_shift";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Right_shift already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Right_shiftExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Equal_toExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Equal_toExpressionNode(){
        id = i++;
        label = "Equal_to";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Equal_to already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Equal_toExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Not_equal_toExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Not_equal_toExpressionNode(){
        id = i++;
        label = "Not_equal_to";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Not_equal_to already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Not_equal_toExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Less_thanExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Less_thanExpressionNode(){
        id = i++;
        label = "Less_than";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Less_than already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Less_thanExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Less_than_or_equal_toExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Less_than_or_equal_toExpressionNode(){
        id = i++;
        label = "Less_than_or_equal_to";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Less_than_or_equal_to already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Less_than_or_equal_toExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Greater_thanExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Greater_thanExpressionNode(){
        id = i++;
        label = "Greater_than";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Greater_than already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Greater_thanExpressionNode() {
        delete left;
        delete right;
   }
};
   

class Greater_than_or_equal_toExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    Greater_than_or_equal_toExpressionNode(){
        id = i++;
        label = "Greater_than_or_equal_to";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Greater_than_or_equal_to already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~Greater_than_or_equal_toExpressionNode() {
        delete left;
        delete right;
   }
};
   

class AndExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    AndExpressionNode(){
        id = i++;
        label = "And";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "And already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~AndExpressionNode() {
        delete left;
        delete right;
   }
};
   

class OrExpressionNode : public AstNode {
private:
    AstNode* left;
    AstNode* right;
    int id;
public:
    OrExpressionNode(){
        id = i++;
        label = "Or";
        name = label + std::to_string(id);
    }
   void add(AstNode* node) override {
       if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            std::cerr << "Or already has two children." << std::endl;
   }

   void print() const override {
        std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
        std::cout << "	" << name << " -> " << left->name << ";" << std::endl;
        left->print();
        std::cout << "	" << name << " -> " << right->name << ";" << std::endl;
        right->print();
   }

   ~OrExpressionNode() {
        delete left;
        delete right;
   }
};
   

   


/**********************************************************************************************/

class Multiline_stringNode : public AstNode
{
private:
    std::string value;

public:
    Multiline_stringNode(std::string name, std::string label, std::string value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        this->value = "\\\""+ value +  "\\\"";
    }

    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class String_literalNode : public AstNode
{
private:
    std::string value;

public:
    String_literalNode(std::string name, std::string label, std::string value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        value[value.size()-1]='\\';
        this->value = '\\' + value +'"' ;
    }

    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class NumberNode : public AstNode
{
private:
    int value;

public:
    NumberNode(std::string name, std::string label, int value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        this->value = value;
    }

    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class Real_numberNode : public AstNode
{
private:
    float value;

public:
    Real_numberNode(std::string name, std::string label, float value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        this->value = value;
    }

    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class CommentNode : public AstNode
{
private:
    std::string value;

public:
    CommentNode(std::string name, std::string label, std::string value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        this->value = value;
    }

    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class IdentifierNode : public AstNode
{

public:
    std::string value = "undefined";
    IdentifierNode(std::string name, std::string label, std::string value)
    {
        this->name = name + std::to_string(AstNode::i);
        this->label = label + std::to_string(AstNode::i++);
        this->value = value;
    }
    void add(AstNode * /*node*/) override
    {
        std::cerr << "Cannot add a child to a leaf node." << std::endl;
    }

    void print() const override
    {
        std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
    }
};

class AST
{
private:
    AstNode *root = nullptr;

public:
    AST(AstNode *r) : root(r) {}

    ~AST()
    {
        if (root != nullptr)
        {
            delete root;
            root = nullptr;
        }
    }
    void Print()
    {
        std::cout << "digraph G {" << std::endl;
        root->print();
        std::cout << "}" << std::endl;
    }
};

#endif