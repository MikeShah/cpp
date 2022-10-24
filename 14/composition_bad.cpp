/////////////////////////////////////////////////
// See preprocessor output: g++ -std=c++17 composition_bad.cpp -
//
// Compile with: g++ -std=c++17 composition_bad.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g composition_bad.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////
#include <iostream>

// @file composition_bad.cpp
class Car{
    // Represent the wheels
    int tirePressure[4];
    int diameter[4];
    // Represent the engine
    int Liters;
    int cylinders;

    public:
        Car(){}
        ~Car(){}
};


// Entry point to program 'main' composition_bad.cpp
int main(){

    return 0;
}
