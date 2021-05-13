/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 cin.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g cin.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file cin.cpp
#include <iostream> // I/O stream library
#include <string>

// Entry point to program 'main' cin
int main(int argc, char* argv[]){

    std::string age = "";
    std::cout << "How old are you? (1-130) " << std::endl;
    // Note: That the >> is pointing towards the variable
    //       You can think of the arrows as pointing towards
    //       where you are writing and storing the value.
    std::cin >> age;
    std::cout << "Wow you are " << age << "!" << std::endl;

    return 0;
}

