/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 polymorphism.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g polymorphism.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file polymorphism.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

int square(int x){
    std::cout << "int square(int x) called" << std::endl;
    return x*x;
}

float square(float x){
    std::cout << "float square(float x) called" << std::endl;
    return x*x;
}

// Entry point to program 'main' polymorphism
int main(int argc, char* argv[]){

    square(7);
    square(7.0f);
    
    return 0;
}
