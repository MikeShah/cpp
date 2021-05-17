/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 leak.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g leak.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file leak.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' leak
int main(int argc, char* argv[]){
  
    // Dynamically allocate a chunk of memory
    int* intArray = new int[60];
    // Yikes, we deleted, but only the first element!
    // We should have usesd 'delete[]'
    delete intArray; // <--- Memory leak

    return 0;
}

