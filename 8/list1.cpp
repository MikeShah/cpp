/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 list1.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g list1.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file list1.cpp
#include <iostream> // I/O stream library

struct Node{
    int data;       // Data carried in the Node
    Node* next;     // Pointer to the next Node
};

int main(){

    // Create on node on the heap
    Node* firstNode = new Node;
    // Setup the node
    firstNode->data = 5;
    firstNode->next = nullptr; // We don't point to anything
                               // i.e. no following node

    // Delete our node
    delete firstNode;

    return 0;
}


