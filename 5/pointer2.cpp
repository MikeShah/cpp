/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer2.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer2
int main(int argc, char* argv[]){
   
    // Initialize an integer
    // (We should always initialize our values)
    int x=1234;
    // Initializng our pointer
    // Typically 'nullptr' if it does not
    // point to anything. (In, C this is simply NULL)
    int* px=nullptr;

    return 0;
}

