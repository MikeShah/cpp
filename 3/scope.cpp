/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 scope.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g scope.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scope.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>


// Entry point to program 'main' scope
int main(int argc, char* argv[]){

    {              // start of scope
        int x = 7; // x is defined
    }              // x is undefined at end of scope 

    {              // start of a new scope
        int x = 5; // a 'new' x is defined
    }              // x is once again undefined at end of scope

    return 0;
}

