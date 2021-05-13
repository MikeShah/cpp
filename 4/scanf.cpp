/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 scanf.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g scanf.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scanf.cpp
#include <iostream> // I/O stream library
#include <string>   // std::string object

// Entry point to program 'main' scanf
int main(int argc, char* argv[]){

    int age;
    std::cout << "How old are you? ";
    std::scanf("%d?", &age);
    std::cout << "Wow you are " << age << "!" << std::endl; 

    return 0;
}

