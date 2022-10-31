/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 functiontemplate2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g functiontemplate2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file functiontemplate2.cpp
#include <iostream> // I/O stream library

template<class T>
T squareTemplated(T x){
    return x*x;
}

// Entry point to program 'main' functiontemplate2
int main(int argc, char* argv[]){

    std::cout << squareTemplated<int>(5) << std::endl;
    std::cout << squareTemplated<float>(5.0f) << std::endl;
    std::cout << squareTemplated<bool>(1) << std::endl;

    return 0;
}

