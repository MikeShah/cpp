/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer6.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer6.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer6.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer6
int main(int argc, char* argv[]){
   
    // Initialize an integer
    int x= 1234;
    // Initializng our pointer
    int* px=&x;
    // print 'x' original value
    std::cout << "x is: " << x << std::endl;
    // Dereference 'px'
    *px = 70;
    // Hmm, what is x now?
    std::cout << "x is: " << x << std::endl;

    return 0;
}

