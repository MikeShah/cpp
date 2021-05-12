/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 constexpr.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g constexpr.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file constexpr.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Sometimes it's possible to compute a value 
// at 'compile-time' by qualifying the return
// of a function as 'constexpr'
// This idea of computing at compile-time is
// really powerful, because then we don't have
// to compute the value at run-time (i.e. when
// the program is running!) thus making our programs
// run faster!
constexpr int square(int x){
    return x * x;
}

// Entry point to program 'main' constexpr
int main(int argc, char* argv[]){

    std::cout << square(5) << std::endl;

    return 0;
}

