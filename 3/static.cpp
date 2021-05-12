/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 static.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g static.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file static.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

void foo(){
    static int counter=0;
    counter = counter + 1;
    std::cout << "foo called: " << counter << " times\n";
}


// Entry point to program 'main' static
int main(int argc, char* argv[]){

    foo();
    foo();
    foo();
    
    return 0;
}
