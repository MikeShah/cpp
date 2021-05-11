/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 std_unordered_map.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g std_unordered_map.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file std_unordered_map.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <unordered_map>    // Include the unordered_map library
#include <string> // String data type

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // Key and value pair
    // - A string will be the key
    // - A string will then be the value
    std::unordered_map<std::string, std::string > dictionary;

    // Create a key/value pair
    std::pair<std::string,std::string> cat("cat","a funny animal");

    // Add elements to our unordered_map 
    dictionary.insert(cat);

    // Lookup a value by the key
    std::cout << dictionary["cat"] << std::endl;

    return 0;
}
