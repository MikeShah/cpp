/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 exercise.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g exercise.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file exericse.cpp
#include <iostream> // I/O stream library
                    //
struct Node{
    int data;       // Data carried in the Node
    Node* next;     // Pointer to the next Node
};

// Allocate a new node on the heap, and append
// it before the given node.
// NOTE: You can assume this new node will be
//       the new 'head' (i.e. front) of the 
//       linked list data structure
//
// NOTE: The return value is the new 'head'
//       of the linked list.
Node* Prepend(Node* head, int newNodeData){
    // TODO
}

// Entry point to program 'main'
int main(int argc, char* argv[]){


    Node* list = new Node;
    
    for(int i=0; i < 5; i++){
        Prepend(list,0);
    }

    // TODO: Write an iterator to print
    //       out your nodes.
    // NOTE: You may need to create a temporary
    //       that captures the last node prepended
    //       which is now the head of the list.

    return 0;
}


