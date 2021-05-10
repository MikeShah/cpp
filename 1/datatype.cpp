/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 datatype.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g datatype.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file datatype.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // We can use the 'sizeof' queries the size of an
    // object in terms of bytes.
    std::cout << "sizeof(bool)  = " << sizeof(bool)  << std::endl;
    std::cout << "sizeof(char)  = " << sizeof(char)  << std::endl;
    std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
    std::cout << "sizeof(int)   = " << sizeof(int)   << std::endl;
    std::cout << "sizeof(long)  = " << sizeof(long)  << std::endl;
    std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
    std::cout << "sizeof(double)= " << sizeof(double) << std::endl;

    return 0;
}
