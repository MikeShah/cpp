/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 value_address.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g value_address.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file value_address.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void func(int x){
    // The copy of x is what we're really modifying
    // Look the address is different!
    std::cout << "copy of x address is: \t" << &x << std::endl;
    x = 9999;
}

// Entry point to program 'main' value_address
int main(int argc, char* argv[]){

    int x = 9;
    std::cout << "x address is: \t\t" << &x << std::endl;
    func(x);
    std::cout << "x is: " << x << std::endl;

    return 0;
}

