#include <iostream>
#include "tree_node.cpp"

int main() {

    Tree tree;
    tree.add_leaf(5);
    tree.add_leaf(3);
    tree.add_leaf(7);
    tree.add_leaf(2);
    tree.add_leaf(4);
    tree.add_leaf(6);
    tree.add_leaf(8);
    tree.add_leaf(1);

    tree.print_tree();


    return 0;
}