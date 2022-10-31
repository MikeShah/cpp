/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 functiontemplate4.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g functiontemplate4.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file functiontemplate4.cpp
#include <iostream> // I/O stream library
#include <ostream>

template<class T>
T squareTemplated(T x){
    return x*x;
}

// Entry point to program 'main' functiontemplate4
int main(int argc, char* argv[]){

	// Observe, compiler can deduce type
    auto one = squareTemplated(5);
    auto two = squareTemplated(5.0f);
    auto three = squareTemplated(1);

	std::cout << one << '\n'
			  << two << '\n'
	  		  << three << std::endl;

    return 0;
}

