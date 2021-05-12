/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 ampersand.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g ampersand.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file ampersand.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' ampersand
int main(int argc, char* argv[]){

    // X is a variable, and variables live
    // 'somewhere' in memory.
    int x = 9;
    // Let's print out where
    std::cout << "x's value is  : " << x << std::endl;
    std::cout << "x's address is: " << &x << std::endl;

    return 0;
}

