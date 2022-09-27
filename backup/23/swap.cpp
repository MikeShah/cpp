/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 swap.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g swap.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file swap.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Entry point to program 'main' swap.cpp
int main(){
    std::vector<int> myVector{1,1,1,1,5,1,6,7,8};
    std::vector<int> myVector2;

    std::swap(myVector2,myVector);

    // Iterate through and print the elements
    std::cout << "myVector2:";
    for(auto& e : myVector2){
        std::cout << e << ",";
    }
    std::cout << "\nmyVector:";
    for(auto& e : myVector){
        std::cout << e << ",";
    }
    std::cout << std::endl;
    return 0;
}

