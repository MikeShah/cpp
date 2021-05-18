/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 multiple_pointers.cpp.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g multiple_pointers.cpp.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file multiple_pointers.cpp.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' multiple_pointers.cpp
int main(int argc, char* argv[]){

    int x = 5;
    int* px = &x;
    int* px2 = &x;

    std::cout << "px and px2 are: " << *px << "," << *px2 << '\n';

    return 0;
}

