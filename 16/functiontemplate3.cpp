/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 functiontemplate3.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g functiontemplate3.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file functiontemplate3.cpp
#include <iostream> // I/O stream library

template<class T>
T squareTemplated(T x){
    return x*x;
}

// Entry point to program 'main' functiontemplate2
int main(int argc, char* argv[]){

	// Observe, compiler can deduce type
    std::cout << squareTemplated(5) << std::endl;
    std::cout << squareTemplated(5.0f) << std::endl;
    std::cout << squareTemplated(1) << std::endl;

    return 0;
}

