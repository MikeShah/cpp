/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 scope_function.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g scope_function.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scope_function.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

int square(int x){
    return x * x;
}

// Entry point to program 'main' scope_function
int main(int argc, char* argv[]){

    int x = 6; // x defined as int and set to 6

    std::cout << square(5) << std::endl;

    return 0;
}

