/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 error.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g error.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file error.cpp
#include <iostream> // I/O stream library
#include <ostream>

class SomeObject{
	public:
		SomeObject(){
		}

};

// Entry point to program 'main' error
int main(int argc, char* argv[]){

	SomeObject myObject;

	std::cout << myObject << std::endl;


    return 0;
}

