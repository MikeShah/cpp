/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 datatype17.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g datatype17.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file datatype17.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // We can use the 'sizeof' queries the size of an
    // object in terms of bytes.
    std::cout << "sizeof(std::byte)  = " << sizeof(std::byte)  << std::endl;
    std::cout << "sizeof(uint8_t)    = " << sizeof(uint8_t)  << std::endl;
    std::cout << "sizeof(int16_t)    = " << sizeof(int16_t) << std::endl;
    std::cout << "sizeof(void*)      = " << sizeof(void*)   << std::endl;
    std::cout << "sizeof(int64_t)    = " << sizeof(int64_t)  << std::endl;
    std::cout << "sizeof(long double)= " << sizeof(long double)  << std::endl;

    return 0;
}
