/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 intArrayClass.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g intArrayClass.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

#include <iostream>

#include "intArrayClass.hpp"

// Our project entry point
// Entry point to program 'main' intArrayClass.cpp
int main(){
	IntArray a(20);
//    IntArray b =a ;
    IntArray b(10);
    b = a;
    std::cout << "m_size = " << a.GetSize(); // Access value for read only
    a.Print();
    b.Print();

	return 0;
}
