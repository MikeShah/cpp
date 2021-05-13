/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 filesystem.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g filesystem.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file filesystem.cpp
#include <iostream> // I/O stream library
#include <string>   // std::filesystem object
#include <filesystem> // New in C++ 17

// Entry point to program 'main' filesystem
int main(int argc, char* argv[]){

    std::cout << "Current path of program is: "
              << std::filesystem::current_path()
              << std::endl;

    return 0;
}

