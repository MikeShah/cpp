/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 string.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g string.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file string.cpp
#include <iostream> // I/O stream library
#include <string>   // std::string object

// Entry point to program 'main' string
int main(int argc, char* argv[]){

    std::string name = "Mike Shah";
    std::cout << "First character is      : " << name[0]    << std::endl;
    std::cout << "First character still is: " << name.at(0) << std::endl;

    std::cout << "Size of string is: " << name.size() << std::endl;
    std::cout << "Size of string is: " << name.length() << std::endl;

    // Remember to subtract one from the size since we index at 0.
    std::cout << "Last character is       : " << name.at(name.size()-1) 
              << std::endl;
    // Alternatively we have 'back()' as a member function to do this
    std::cout << "First character still is: " << name.back() << std::endl;

    return 0;
}

