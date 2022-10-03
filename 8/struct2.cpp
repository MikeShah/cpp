/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 struct2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g struct2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct2.cpp
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

    
    // Query the type size either by the type
    // or a specific instance of the type
    std::cout << sizeof(Point2D) << std::endl;
    std::cout << sizeof(origin) << std::endl;


    return 0;
}


