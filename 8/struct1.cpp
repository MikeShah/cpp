/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 struct1.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g struct1.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct1.cpp
#include <iostream> // I/O stream library

struct Point2D{
    float x;
    float y;
};

int main(){

    // An instance named 'origin' of type 'Point2D'
    Point2D origin;
    // Set the 'member variables' (a.k.a fields)
    // of our struct.
    origin.x = 0.0f;
    origin.y = 0.0f;

    std::cout << "Origin is: (" 
              << origin.x 
              << "," 
              << origin.y 
              << ")"
              << std::endl;

    return 0;
}


