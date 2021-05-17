/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 address.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g address.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file address.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' address
int main(int argc, char* argv[]){
   
    int a = 5;;
    char b = 'b';;
    char c = 'c';;

    std::cout << "a address: " << &a << std::endl;
    std::cout << "b address: " << (void*)&b << std::endl;
    std::cout << "c address: " << static_cast<void*>(&c) << std::endl;

    return 0;
}

