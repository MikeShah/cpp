/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 value.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g value.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file value.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void func(int x){
    x = 9999;
}

// Entry point to program 'main' value
int main(int argc, char* argv[]){

    int x = 9;
    func(x);
    std::cout << "x is: " << x << std::endl;

    return 0;
}

