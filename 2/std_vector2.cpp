/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 std_vector2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g std_vector2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file std_vector2.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <vector>    // Include the vector library

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // The first parameter is the type
    std::vector<float> myVector;

    // Add elements to our vector
    myVector.push_back(1.7f);
    myVector.push_back(2.4f);
    myVector.push_back(3.2f);
    // Access element at a specific position
    myVector.at(2);
    // Remove the last element
    myVector.pop_back();
    // Print everything in the vector
    for(int i=0; i < myVector.size(); i++){
        // Use the [ ] operator to access an element
        // at the i'th position in the vector
        std::cout << myVector[i] << std::endl;
    }

    return 0;
}
