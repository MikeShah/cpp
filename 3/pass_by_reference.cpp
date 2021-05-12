/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pass_by_reference.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pass_by_reference.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pass_by_reference.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void func(int& x){
    // The copy of x is what we're really modifying
    // Look the address is different!
    std::cout << "referencing x at same address:  " << &x << std::endl;
    x = 9999;
}

// Entry point to program 'main' pass_by_reference
int main(int argc, char* argv[]){

    int x = 9;
    std::cout << "x address is: \t\t\t" << &x << std::endl;
    func(x);
    std::cout << "x is: " << x << std::endl;

    return 0;
}

