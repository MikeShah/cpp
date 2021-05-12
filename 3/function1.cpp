/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function1.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function1.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function1.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Name:         myFunction
// Return Value: None
// Arguments:    None
void myFunction(){
    std::cout << "No parameters, just do some work\n";
}

// Entry point to program 'main' function1
int main(int argc, char* argv[]){

    // Make a functioon call
    myFunction();
    
    return 0;
}
