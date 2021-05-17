/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pointer4.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pointer4.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pointer4.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' pointer4
int main(int argc, char* argv[]){
   
    // Initialize an integer
    // (We should always initialize our values)
    int x=1234;
    // Initializng our pointer
    // Now point to an address
    // (Hint: Try removing the '&' to see what happens!)
    int* px=&x;

    std::cout << "x address   : " << &x << std::endl;
    std::cout << "px points to: " << px << std::endl;

    return 0;
}

