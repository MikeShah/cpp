/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 array.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g array.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file array.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    
    int array[5];
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    array[3] = 3;
    array[4] = 4;

    return 0;
}
