/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 call_stack.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g call_stack.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file call_stack.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void foo(int x){
    bar();
    return;
}


// Entry point to program 'main' call_stack
int main(int argc, char* argv[]){

    square(7);
    square(7.0f);
    
    return 0;
}
