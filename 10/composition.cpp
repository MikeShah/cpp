/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 composition.cpp -
//
// Compile with: g++ -std=c++17 composition.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g composition.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file composition.cpp
#include <iostream>

struct Wheel{
    int tirePressure;
    int diameter;
}

struct Engine{
    int Liters;
    int cylinders;
}

// For examples in class, I will sometimes, not separate
// the interface from the implementation, so you can see, everthing on one screen!
class Car{
    // We are composing our car with 
    // a data type, vector of wheels.
    std::vector<Wheel> wheel;
    // Another example of composition
    Engine m_engine;

    public:
        Car(){}
        ~Car(){}
};


// Entry point to program 'main' composition.cpp
int main(){

    return 0;
}
