/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 while.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g while.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file while.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <array>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    
    while(true){
        std::cout << "print forever" << std::endl;
    }

    return 0;
}
