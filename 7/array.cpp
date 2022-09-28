/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 array.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g array.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file array.cpp
#include <iostream> // I/O stream library
#include <array>    // For 'std::array'

// Entry point to program 'main'
int main(int argc, char* argv[]){

    // Statically sized arrays are 'fixed-size'
    // meaning we cannot change the amount of
    // data stored within them.
    char myArray[5];
    std::array<char,5> mySTLArray;

    // Both will report '5'
    std::cout << sizeof(myArray) << std::endl;
    std::cout << sizeof(mySTLArray) << std::endl;
 
    return 0;
}

