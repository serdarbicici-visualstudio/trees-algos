
class Node
{
private:
    int data;

public:
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
