/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 stl.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g stl.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file stl.cpp
#include <iostream> // I/O stream library
#include <vector>


// Entry point to program 'main' stl
int main(int argc, char* argv[]){

    std::vector<double> myVector;
    myVector.push_back(7.0);

    return 0;
}

