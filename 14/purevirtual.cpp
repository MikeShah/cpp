/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 purevirtual.cpp -
//
// Compile with: g++ -std=c++17 purevirtual.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g purevirtual.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file purevirtual.cpp
#include <iostream>

class Shape{
    public:
    int width, height;
    // Here is a pure virtual function in C++
    //
    // It forces, any derived classes, to implement
    // this member function
    virtual int area() = 0;

};

class Rectangle: public Shape{
    public:
        Rectangle(){
        }

        int area(){
            std::cout << "Rectangle::area()" << std::endl;
            return width*height;
        }

};


// Entry point to program 'main' purevirtual.cpp
int main(){

    Rectangle r;

    return 0;
}
