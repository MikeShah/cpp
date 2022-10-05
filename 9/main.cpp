/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 main.cpp Math.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g main.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file main.cpp
#include <iostream> // I/O stream library
// Our include file for 'Math.hpp'
#include "Math.hpp"

int main(){

    std::cout << add(4,7) << std::endl;

    return 0;
}










