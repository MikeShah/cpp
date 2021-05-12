/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function5.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function5.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function5.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

int add(int a, int b){
    return a+b;
}

// Entry point to program 'main' function5
int main(int argc, char* argv[]){

    std::cout << "Result of add(7,2) = " << add(7,2) << std::endl;

    return 0;
}

