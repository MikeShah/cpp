/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 hello.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g hello.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    // From the standard library namespace
    // Output to standard output stream
    // a string "hello!"
    std::cout << "hello!" << std::endl;

    // Return from our function the value
    // 0, which typically means 'success' from
    // the main function
    return 0;
}
