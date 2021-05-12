/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function6.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function6.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function6.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}

// Entry point to program 'main' function6
int main(int argc, char* argv[]){

    std::cout << "factorial(0) = " << factorial(0) << std::endl;
    std::cout << "factorial(1) = " << factorial(1) << std::endl;
    std::cout << "factorial(2) = " << factorial(2) << std::endl;
    std::cout << "factorial(3) = " << factorial(3) << std::endl;
    std::cout << "factorial(4) = " << factorial(4) << std::endl;
    std::cout << "factorial(5) = " << factorial(5) << std::endl;
    std::cout << "factorial(6) = " << factorial(6) << std::endl;

    return 0;
}

