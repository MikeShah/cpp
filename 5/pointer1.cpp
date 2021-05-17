/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer1.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer1.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer1.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer1
int main(int argc, char* argv[]){
   
    // A regular integer
    int x;
    // A "pointer to an integer"
    // Notice: The '*' right next to the data type when
    // we declare it. 
    // It's kind of like a qualifier like 'const', but it
    // is a pointer type.
    int* px;

    return 0;
}

