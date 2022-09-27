/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 main.cpp -
//
// Compile with: g++ -std=c++17 main.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g main.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file main.cpp
#include <iostream>
#include "math.hpp"

// Entry point to program 'main' main.cpp
int main(){

    std::cout << "add(7,2)=" << mike::add(7,2) << std::endl;

    return 0;
}
