/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 rvalue_move.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g rvalue_move.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file rvalue_move.cpp
#include <iostream>
#include <utility> // std::move
#include <string>

// Entry point to program 'main' rvalue_move.cpp
int main(){

    std::string value = "some really long string";
	std::string& alias = value;

    // I'm going to 'steal' the resource during the
    // construction of the newString object.
    std::string newString{std::move(alias)};

    // Prints out empty
    std::cout << "value    :" << value << std::endl;
    std::cout << "alis     :" << alias << std::endl;
    // Observe that ownership is transferred to newString
    std::cout << "newString:" << newString << std::endl;

    return 0;
}

