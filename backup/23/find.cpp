/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 find.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g find.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file find.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Entry point to program 'main' find.cpp
int main(){

    std::vector<int> myVector{1,2,3,4,5,6,7,8};
    // Find if '5' is in our data structure

    // Longer version explicitly showing the type.
//    std::vector<int>::iterator  findFive = std::find(myVector.begin(), myVector.end(),5);

    // So sometimes again, I like using auto for my iterators.
    // Can also use, std::begin and std::end for our iterators.
    auto findFive = std::find(std::begin(myVector),std::end(myVector),5);
    // This is much better than, having to loop through the data
    // structure--the intent is clear, and it's a one liner!

    // If we find '5' in our collection,
    // we must not have reached the end.
    if(findFive != std::end(myVector)){
        std::cout << "Yes, 5 is in our vector!" << std::endl;
    }

    return 0;
}

