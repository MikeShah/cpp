/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 simple_move_assignment.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g simple_move_assignment.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file simple_move_assignment.cpp
#include <iostream>
#include <utility> // std::move
#include <string>

// Entry point to program 'main' simple_move_assignment.cpp
int main(){

    std::string value = "some really long string";
    // I'm going to 'steal' the resource during the
    // construction of the newString object.
    std::string newString;//{std::move(value)};

    // This time let's use the move assignment operator
    // This is equivalent to 'assigning' or casting otherwise
    // the rvalue_reference to the new string, thus invoking
    // the move assignment operator
    newString = static_cast<std::string&&>(value);

    // Prints out empty
    std::cout << "value    :" << value << std::endl;
    // Observe that ownership is transferred to newString
    std::cout << "newString:" << newString << std::endl;

    return 0;
}

