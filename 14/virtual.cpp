/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 virtual.cpp -
//
// Compile with: g++ -std=c++17 virtual.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g virtual.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file virtual.cpp
#include <iostream>

class Shape{
    public:
    int width, height;
    // Ensure the right area function is called
    // Based on the memory allocated for the 
    // object
    virtual int area(){
        std::cout << "Shape::area()" << std::endl;
        return width*height;
    }
};

class Rectangle: public Shape{
	// 'override' is not required, but will
	// signal to the compiler that you are indeed looking
	// for a function in a parent class to override.
    int area() override{
        std::cout << "Rectangle::area" << std::endl;
        return width*height;
    }
};

// Entry point to program 'main' virtual.cpp
int main(){

    // So which version is called?
    Shape* s1 = new Rectangle;
    s1->area();
    // How about now?
    Shape* s2 = new Shape;
    s2->area();

    return 0;
}
