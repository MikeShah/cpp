/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 hello.cpp -
//
// Compile with: g++ -std=c++17 hello.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g hello.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file hello.cpp

#include "hello.hpp"
#include "hello.hpp"

// Entry point to program 'main' hello.cpp
int main(){

    #ifdef TEST
        2+2;
    #endif

    return 0;
}
