/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 inheritance.cpp -
//
// Compile with: g++ -std=c++17 inheritance.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g inheritance.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file inheritance.cpp
#include <iostream>

class Shape{
protected:          // Protected, allows derived classes, to access protected member variables or functions
    int m_area;
public:
    void ComputeArea(){
        std::cout << "Shape::ComputeArea()" << std::endl;
    }
    int GetArea(){
        std::cout << "Shape::GetArea()" << std::endl;
        return m_area;
    }
};
// Derived classes from the base class 'Shape'
class Triangle : public Shape{
    int m_base, m_height;
    public:
        // *NEW Concept** Initializer list
        Triangle(int base, int height) : m_base(base),m_height(height){ 
            m_area = m_base* m_height * 0.5;
        }
        int GetArea(){
            std::cout << "Triangle::GetArea()" << std::endl;
            return m_area;
        }
};

class Rectangle : public Shape{
    int m_width, m_height;
    public:
        Rectangle(int width, int height){
            m_width = width;
            m_height = height;

            m_area = m_width * m_height;
        }
        int GetArea(){
            std::cout << "Rectangle::GetArea()" << std::endl;
            return m_area;
        }
};

// Entry point to program 'main' inheritance.cpp
int main(){

    Shape s1;
    s1.ComputeArea();
    s1.GetArea();

    Triangle t1(3,4);
    t1.ComputeArea();
    t1.GetArea();

    Rectangle r1(3,4);
    r1.ComputeArea();
    r1.GetArea();

    return 0;
}
