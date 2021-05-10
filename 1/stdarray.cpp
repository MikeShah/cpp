/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 stdarray.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g stdarray.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file stdarray.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <array>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    // Standard library array
    // Created with 'integers'
    // This one also constructed with '5'
    std::array<int,5> arr;

    return 0;
}
