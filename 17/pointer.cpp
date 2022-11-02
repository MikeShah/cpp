/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer
int main(int argc, char* argv[]){

    float* p_float = nullptr; // I point to floats
    float some_float = 3.5f;  // I am a regular float
    p_float = &some_float;    // Point to address of variable
    p_float = &(some_float);  // Same line as above, but useful
                              // to understand '&' is an operator,
                              // but we can think of the same as
                              // a function.

    std::cout << "dereference p_float: " << *p_float << std::endl;

    return 0;
}

