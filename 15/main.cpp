/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 main.cpp BinaryTree.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g main.cpp BinaryTree.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file main.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

#include "BinaryTree.hpp"

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    BinaryTree tree;
    tree.Insert(4);
    tree.Insert(2);
    tree.Insert(3);
    tree.Insert(5);
    tree.Insert(7);

    std::cout << "Is 3 in the tree? " << tree.Exists(3) << std::endl;
    std::cout << "Is 9 in the tree? " << tree.Exists(9) << std::endl;
    std::cout << "Is 7 in the tree? " << tree.Exists(7) << std::endl;

    tree.Print();

    return 0;
}
