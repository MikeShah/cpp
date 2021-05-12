/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pass_by_const_reference.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pass_by_const_reference.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pass_by_const_reference.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void func(const int &x){
    // Not allowed, x is 'const'
    x = 9999;
}

// Entry point to program 'main' pass_by_const_reference
int main(int argc, char* argv[]){

    int x = 9;
    // Passing in x by const reference, thus we are not making
    // a copy of 'x', and we are also not allowed to modify x
    func(x);
    std::cout << "x remains: " << x << std::endl;

    return 0;
}

