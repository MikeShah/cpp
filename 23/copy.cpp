/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 copy.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g copy.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file copy.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Entry point to program 'main' copy.cpp
int main(){
    std::vector<int> myVector{1,1,1,1,5,1,6,7,8};
    std::vector<int> myVector2;

    // Copy elements 1 at a time
    /* 
    std::copy(myVector.begin(),
                 myVector.end(),
                 std::back_inserter(myVector2));
    */

    // Copy into data structure, based on some condition.
    // We use a lambda function, to determine what that
    // condition is.
    std::copy_if(myVector.begin(),
                 myVector.end(),
                 std::back_inserter(myVector2),
                 [](int x){return x>5;});

    // Iterate through and print the elements
    for(auto& e : myVector2){
        std::cout << e << std::endl;
    }
    return 0;
}

