/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 type.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g type.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file type.cpp
#include <iostream> // I/O stream library
#include <typeinfo>    // Print out type of variable.

// Entry point to program 'main' type
int main(int argc, char* argv[]){
   
    int a = 5;
    // Retrieve run-time type information
    std::cout << "What's my type? " << typeid(int).name() << std::endl;
    std::cout << "What's my type? " << typeid(a).name() << std::endl;

    return 0;
}

