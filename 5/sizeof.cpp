/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 sizeof.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g sizeof.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file sizeof.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' sizeof
int main(int argc, char* argv[]){
    
    std::cout << "bool:" << sizeof(bool) << std::endl;
    std::cout << "unsigned char:" << sizeof(unsigned char) << std::endl;
    std::cout << "char:" << sizeof(char) << std::endl;
    std::cout << "short:" << sizeof(short) << std::endl;
    std::cout << "uint8_t:" << sizeof(int8_t) << std::endl;
    std::cout << "int:" << sizeof(int) << std::endl;
    std::cout << "float:" << sizeof(float) << std::endl;
    std::cout << "double:" << sizeof(int) << std::endl;


    return 0;
}

