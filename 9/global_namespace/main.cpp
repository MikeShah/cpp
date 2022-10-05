/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 main.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g main.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file global_namespace/main.cpp
#include <iostream> // I/O stream library

namespace mike{
	int x;
	void foo(){
		std::cout << "mike::foo()\n";
	}
}

void foo(){
	std::cout << "::foo  (in global namespace)\n";
}

int main(){

	// Observe the difference in the calls here.
	mike::foo();
	// Observe the two different ways to refer to foo
	// in the global namespace
	foo();
	::foo();

    return 0;
}










