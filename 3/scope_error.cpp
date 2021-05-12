/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 scope_error.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g scope_error.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scope_error.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>


// Entry point to program 'main' scope_error
int main(int argc, char* argv[]){

    int x = 6; // x defined as int and set to 6
    int x = 7; // x is already defined error!

    return 0;
}

