/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 raw_array.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g raw_array.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file raw_array.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    
    int raw_array[9];
    raw_array[0] = 7;
    raw_array[1] = 9;
    raw_array[2] = 12;
    raw_array[3] = 16;
    raw_array[4] = 15;
    raw_array[5] = 17;
    raw_array[6] = 24;
    raw_array[7] = -5;
    raw_array[8] = -14;

    return 0;
}
