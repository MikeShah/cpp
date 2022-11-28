/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 lvalue.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g lvalue.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file lvalue.cpp
#include <iostream>
#include <utility> // std::lvalue
#include <type_traits>

int foo(){
    return 42;
}

// Entry point to program 'main' lvalue.cpp
int main(){

    foo() = 77;

    return 0;
}


