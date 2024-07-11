#include <iostream>


class Node
{
private:
    //int data;

public:
    int data;
    Node *right;
    Node *left;
    
    Node(int number);

    ~Node();
};

Node::Node(int number) {
    data = number;
    right = nullptr;
    left = nullptr;
}

Node::~Node()
{
}

class Tree
{
private:
    Node *root;

public:
    Tree();

    void add_leaf(int number);
    void delete_leaf(int number);
    void print_tree();

    ~Tree();
};

Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
}

void Tree::add_leaf(int number) {


    Node *new_node = new Node(number);
    
    if (root == nullptr) {
        root = new_node;
        return;
    }

    Node *current = root;

    while (true)
    {
        if (number > current->data)
        {
            if (current->right == nullptr)
            {
                current->right = new_node;
                return;
            }
            current = current->right;
        }
        else
        {
            if (current->left == nullptr)
            {
                current->left = new_node;
                return;
            }
            current = current->left;
        }
    }
    
    

}

void Tree::print_tree() {
    // in order traversal recursive
    // left, root, right
    Node *current = root;
    
    while (current != nullptr)
    {
        if (current->left == nullptr)
        {
            std::cout << current->data << std::endl;
            current = current->right;
        }
        else
        {
            Node *pre = current->left;
            while (pre->right != nullptr && pre->right != current)
            {
                pre = pre->right;
            }

            if (pre->right == nullptr)
            {
                pre->right = current;
                current = current->left;
            }
            else
            {
                pre->right = nullptr;
                std::cout << current->data << std::endl;
                current = current->right;
            }
        }
    }
    
}