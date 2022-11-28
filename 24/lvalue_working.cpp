/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 lvalue_working.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g lvalue_working.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file lvalue_working.cpp
#include <iostream>
#include <utility> 
#include <type_traits>

int x = 42;
int& foo(){
    return x;
}

// Entry point to program 'main' lvalue_working.cpp
int main(){

    foo() = 77;

    return 0;
}


