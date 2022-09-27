/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 vector.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g vector.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file vector.cpp
#include <iostream> // I/O stream library
#include <vector>
#include <memory>

// Entry point to program 'main' vector
int main(int argc, char* argv[]){


    // I prefer this style
    std::vector<std::unique_ptr<int>> vector_of_smart_ints;
    // over the below
    std::vector<int*> vector_of_ints;

    return 0;
}

