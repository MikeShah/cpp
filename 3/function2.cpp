/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 function2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g function2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file function2.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Function declaration
// This makes the function available,
// and we must otherwise provide the definition
// (i.e. the implementation) in our codebase,
// either later in this file, another file, or
// by linking in a library.
void myFunction();

// Entry point to program 'main' function2
int main(int argc, char* argv[]){

    // Make a functioon call
    myFunction();
    
    return 0;
}

// Function Defintion here

// Name:         myFunction
// Return Value: None
// Arguments:    None
void myFunction(){
    std::cout << "No parameters, just do some work\n";
}
