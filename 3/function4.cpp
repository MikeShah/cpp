/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function4.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function4.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function4.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

int add(int a, int b){
    return a+b;
}

// Entry point to program 'main' function4
int main(int argc, char* argv[]){

    int result = add(7,2);
    std::cout << "Result of add(7,2) = " << result << std::endl;

    return 0;
}

