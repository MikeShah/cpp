/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 list2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g list2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file list2.cpp
#include <iostream> // I/O stream library

struct Node{
    int data;       // Data carried in the Node
    Node* next;     // Pointer to the next Node
};

int main(){

    // Create on node on the heap
    Node* firstNode     = new Node;
    Node* secondNode    = new Node;
    Node* thirdNode     = new Node;
    // Setup the node
    firstNode->data = 1;
    firstNode->next = secondNode; // We don't point to anything
                               // i.e. no following node
    secondNode->data = 2;
    secondNode->next = thirdNode; // We don't point to anything
                               // i.e. no following node

    thirdNode->data = 3;
    thirdNode->next = nullptr; // We don't point to anything
                               // i.e. no following node

    // Delete our node
    delete firstNode;
    delete secondNode;
    delete thirdNode;

    return 0;
}


