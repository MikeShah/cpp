/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer5.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer5.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer5.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer5
int main(int argc, char* argv[]){
   
    // Initialize an integer
    int x= 1234;
    // Initializng our pointer
    int* px=&x;

    std::cout << "x address   : " << &x << std::endl;
    std::cout << "px points to: " << px << std::endl;

    // Notice the '*' in front of the variable we are
    // dereferencing!
    std::cout << "px dereferenced:" << *px << std::endl;

    return 0;
}

