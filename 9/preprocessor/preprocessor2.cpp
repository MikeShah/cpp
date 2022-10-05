/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 preprocessor2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g preprocessor2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file preprocessor/preprocessor2.cpp
#include <iostream> // I/O stream library

#define UNIX 1
#define MESSAGE "Hello\n"

int main(){

	#if UNIX
	std::cout << "Hi Unix User" << std::endl;
	#else 
	std::cout << MESSAGE << "non-unix user" << std::endl;
	#endif

    return 0;
}


