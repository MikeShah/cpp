/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 loop.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g loop.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file loop.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <array>

// Entry point to program 'main' function
int main(int argc, char* argv[]){
    // Standard library array
    // Created with 'integers'
    // This one also constructed with '5'
    std::array<int,5> arr;
    arr.fill(7); 
    // Iterate through our array
    for(int i=0; i < arr.size(); i++){
        std::cout << arr.at(i) << std::endl;
    }

    return 0;
}
