/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 reverse.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g reverse.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file reverse.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Entry point to program 'main' reverse.cpp
int main(){

    std::vector<int> myVector{1,2,3,4,5,6,7,8};
    // Reverse our collection
    std::reverse(myVector.begin(),myVector.end());
    // Iterate through and print the elements
    // Using a 'for-each' style loop, to just iterate
    // through all of our elements.
    for(auto& e : myVector){
        std::cout << e << std::endl;
    }


    return 0;
}

