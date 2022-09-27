/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 functiontemplate.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g functiontemplate.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file functiontemplate.cpp
#include <iostream> // I/O stream library

int square(int x){
    return x*x;
}

float square(float x){
    return x*x;
}

// Note 'T' is replaced everywhere
// with the data type we specify in the
// brackets.
template<class T>
T squareTemplated(T x){
    return x*x;
}

// Entry point to program 'main' functiontemplate
int main(int argc, char* argv[]){

    std::cout << square(5) << std::endl;
    std::cout << squareTemplated<int>(5) << std::endl;

    return 0;
}

