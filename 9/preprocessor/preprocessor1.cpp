/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 preprocessor1.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g preprocessor1.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file preprocessor/preprocessor1.cpp
#include <iostream> // I/O stream library

#define UNIX 1
#define MESSAGE "Hello\n"

int main(){

	std::cout << MESSAGE << std::endl;

    return 0;
}

