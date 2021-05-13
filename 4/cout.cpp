/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 cout.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g cout.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file cout.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' cout
int main(int argc, char* argv[]){

    std::cout << "Hello World" << std::endl;

    return 0;
}

