/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 ascii.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g ascii.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file ascii.cpp
#include <iostream> // I/O stream library
#include <string>   // std::ascii object

// Entry point to program 'main' ascii
int main(int argc, char* argv[]){

    char charArray[] = "Mike Shah";
    std::string name = "Mike Shah";
    // Insert a breakpoint here
    // and examine 'charArray' and 
    // 'name' in GDB
    std::cout << name << std::endl;
    // equivalent to charArray is...
    std::cout << name.c_str() << std::endl;

    std::cout << "First letter integer representation is: "
              << (int)name[0] << std::endl;

    return 0;
}

