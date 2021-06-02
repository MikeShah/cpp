/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 special.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g special.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file special.cpp
#include <iostream> // I/O stream library
#include <string>

template<class T>
T squareTemplated(T x){
    return x*x;
}

// Here's a specialized version
template<>
int squareTemplated(std::string x){
    std::cout << "Specialized version" << std::endl;
    return -1;
}

// Entry point to program 'main' special
int main(int argc, char* argv[]){

    std::cout << squareTemplated<int>(5) << std::endl;
    std::cout << squareTemplated("hi") << std::endl;

    return 0;
}

