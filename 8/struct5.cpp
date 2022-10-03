/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 struct5.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g struct5.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct5.cpp
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

    // Note: We can use 'this' in front of
    //       a member variable to make
    //       our use of the same named
    //       variables less ambiguous
    void SetXY(float x, float y){
        // this.x is the 'internal member variable'
        // 'x' is the argument passed into the member
        // function
        this->x = x;
        this->y = y;
    }
};

// @file struct5.cpp
int main(){

    // An instance named 'origin' of type 'Point2D'
    Point2D origin;
    origin.SetXY(0.0f,0.0f);

    Point2D secondPoint;
    secondPoint.SetXY(5.0f,72.0f);

    // Usage of our 'struct'
    origin.Print();
    secondPoint.Print();

    return 0;
}

