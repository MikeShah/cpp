/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function3.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function3.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function3.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void myFunction();
void myFunction2();

void myFunction(){
    myFunction2();
}

void myFunction2(){
    std::cout << "Hello from myFunction2, which was called \
from myFunction. In order to do this, we \
had to forward declare myFunction2 at \
line 17.\n";
}

// Entry point to program 'main' function2
int main(int argc, char* argv[]){

    // Make a functioon call
    myFunction();
    
    return 0;
}

