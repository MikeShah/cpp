/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 accumulate.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g accumulate.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file accumulate.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric> // New library for mathematical algorithms

// Entry point to program 'main' accumulate.cpp
int main(){

    std::vector<int> myVector{1,1,1,1,5,1,6,7,8};

    // Where to start, end, and the initial sum (which is 0)
    int sum = std::accumulate(myVector.begin(),myVector.end(),0);

    std::cout << "The sum is: " << sum << std::endl;


    return 0;
}

