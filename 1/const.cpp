/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 const.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g const.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file const.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

const float PI = 3.1415;

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // Use << 'the stream operator' to output
    // multiple values.
    std::cout << "PI is: " << PI << std::endl;

    return 0;
}
