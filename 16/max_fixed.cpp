/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 max_fixed.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g max_fixed.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file max_fixed.cpp
#include <iostream> // I/O stream library
#include <ostream>

template<class T1, class T2>
auto max(T1 a, T2 b){
    return b < a ? a : b;
}

// Entry point to program 'main' max_fixed 
int main(int argc, char* argv[]){

	std::cout << max(7.3f,7) << std::endl;;
	// This is a bug!
	std::cout << max(7L,7.1f) << std::endl;;

    return 0;
}

