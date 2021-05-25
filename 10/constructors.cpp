/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 constructors.cpp -
//
// Compile with: g++ -std=c++17 constructors.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g constructors.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file constructors.cpp
#include <iostream>

class Shape{
protected:     
    int m_area;
public:
    Shape(){
        std::cout << "Shape::Shape() - Constructor" << std::endl;
    }
    ~Shape(){
        std::cout << "Shape::~Shape() - Destructor" << std::endl;
    }
};

// Derived classes from the base class 'Shape'
class Triangle : public Shape{
protected:
    public:
        // *NEW Concept** Initializer list
        Triangle(){ 
            std::cout << "Triangle::Triangle() - Constructor" << std::endl;
        }
        //
        ~Triangle(){
            std::cout << "Triangle::~Triangle() - Destructor" << std::endl;
        }
};

// Derived classes from the base class 'Shape'
class RightTriangle : public Triangle{
    int m_base, m_height;
    public:
        RightTriangle(int base, int height) : m_base(base),m_height(height){ 
            std::cout << "RightTriangle::RightTriangle() - Constructor" << std::endl;
            m_area = m_base* m_height * 0.5;
        }
        //
        ~RightTriangle(){
            std::cout << "RightTriangle::~RightTriangle() - Destructor" << std::endl;
        }
};

// Entry point to program 'main' constructors.cpp
int main(){

//    Shape s1;

    RightTriangle t1(3,4);


    return 0;
}
