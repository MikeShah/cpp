/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 struct.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g struct.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct.cpp
#include <iostream> // I/O stream library

struct color{
    int r,g,b;
};

struct pixel{
    int x;    // Fields or 'member variables'
    int y;    // x, y, and color
    color rgb;
};

// Entry point to program 'main' struct.cpp
int main(int argc, char* argv[]){

    pixel myFirstPixel;
    myFirstPixel.x = 5; 
    myFirstPixel.y = 15; 
    myFirstPixel.rgb.r = 255;
    myFirstPixel.rgb.g = 125;
    myFirstPixel.rgb.b = 65;

    
    return 0;
}

