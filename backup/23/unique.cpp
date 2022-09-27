/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 unique.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g unique.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file unique.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// Entry point to program 'main' unique.cpp
int main(){

    std::vector<int> myVector{1,1,1,1,5,1,6,7,8};
    // We can also sort easily!
    std::sort(myVector.begin(),myVector.end());
    // Just retrieve the (adjacent) unique elements in our vector.
    auto uniq = std::unique(myVector.begin(), myVector.end()); 
    // Now, we need to erase, the 'extra' space
    // Why we pass in 'uniq', is because remember, that is a 
    // iterator, and points us to the last element in our new unique
    // collection.
    myVector.erase(uniq,myVector.end());

    
    // Iterate through and print the elements
    for(auto& e : myVector){
        std::cout << e << std::endl;
    }

    return 0;
}

