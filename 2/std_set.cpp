/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 std_set.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g std_set.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file std_set.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <set>    // Include the set library
#include <string> // String data type

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // A single key
    std::set<std::string > mySet;

    // Add elements to our set 
    mySet.insert("cat");
    mySet.insert("cat");
    mySet.insert("cat");
    mySet.insert("cat");
    mySet.insert("cat");

    // Lookup a value by the key
    std::cout << "Unique items: " << mySet.size() << std::endl;

    return 0;
}
