/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 stdarray2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g stdarray2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file stdarray2.cpp
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
    arr.fill(7); // Fill array with 7's
    std::cout << "Confirm a 7: " << arr[3] << std::endl;
    // Another way to index into an array, 'at' uses bounds checking
    // to ensure that you do not go out of bounds
    std::cout << "Confirm a 7: " << arr.at(3) << std::endl;
    std::cout << "Check our size of array: " << arr.size() << std::endl;

    return 0;
}
