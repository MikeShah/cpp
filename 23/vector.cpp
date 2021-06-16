/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 vector.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g vector.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file vector.cpp
#include <iostream>
#include <vector>

// Entry point to program 'main' vector.cpp
int main(){

    std::vector<int32_t> myVector;
    for(int i=0; i < 10; i++){
        myVector.push_back(i);
    }
    // Check vector contents using member functions
    for(int i=0; i < myVector.size(); i++){
        std::cout << myVector.at(i) << std::endl;
    }
    // If my intent is to always, look through all elements,
    // I can instead, use an iterator.
    for(std::vector<int32_t>::iterator it = myVector.begin();
            it != myVector.end();
            ++it){

        std::cout << *it << std::endl;
    }


    return 0;
}

