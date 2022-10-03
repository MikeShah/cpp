/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 struct4.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g struct4.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct4.cpp
#include <iostream> // I/O stream library

struct Point2D{
    public: // By default access level is public in
            // a 'struct' in C++
    float x;
    float y;

    // Publically available Member Function
    void Print(){
        std::cout << this 
                  << " Point2D(" 
                  << x << "," << y << ")"
                  << std::endl;
    }
};

int main(){

    // An instance named 'origin' of type 'Point2D'
    Point2D origin;
    // Set the 'member variables' (a.k.a fields)
    // of our struct.
    origin.x = 0.0f;
    origin.y = 0.0f;

    // Usage of our 'struct'
    origin.Print();

    return 0;
}

