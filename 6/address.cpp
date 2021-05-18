/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 object.cpp.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g object.cpp.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file object.cpp.cpp
#include <iostream> // I/O stream library
#include <vector>   // std::vector

// Entry point to program 'main' object.cpp
int main(int argc, char* argv[]){
   
    // myVector is an object.
    // It is an instance of an object with a type of
    // 'std::vector' that can store int's.
    std::vector<int> myVector;

    return 0;
}

