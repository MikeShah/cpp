/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 max.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g max.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file max.cpp
#include <iostream> // I/O stream library
#include <ostream>

template<class T1, class T2>
T1 max(T1 a, T2 b){
    return b < a ? a : b;
}

// Entry point to program 'main' max 
int main(int argc, char* argv[]){

	std::cout << max(7.3f,7) << std::endl;;
	// This is a bug!
	std::cout << max(7L,7.1f) << std::endl;;

    return 0;
}

