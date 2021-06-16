/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 nth.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g nth.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file nth.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

// Entry point to program 'main' nth.cpp
int main(){
    std::vector<int> myVector{1,1,1,1,5,1,6,7,8};

    std::nth_element(myVector.begin(), 
                      myVector.begin() + myVector.size()/2,
                      myVector.end());

    std::cout << "The median is " << myVector[myVector.size()/2] << std::endl;

    return 0;
}

