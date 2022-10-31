/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 main.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g main.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file classtemplateproject/main.cpp
#include <iostream>

#include "intArrayClass.hpp"


// Entry point to program 'main' intArrayClass.cpp
int main(){

    // IntArray is now in the class scope, with
    // the namespace 'mike'
    mike::Array<bool> a(20);
//    IntArray b =a ;
    mike::Array<bool> b(10);
    b = a;
    std::cout << "m_size = " << a.GetSize(); // Access value for read only
    a.Print();
    b.Print();

	return 0;
}
