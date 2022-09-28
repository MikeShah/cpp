/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 vector.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g vector.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file vector.cpp
#include <iostream> // I/O stream library
#include <vector>   // Vector data structure

// Entry point to program 'main'
int main(int argc, char* argv[]){

    // Initialize our array
    std::vector <char> myVector = {'m','i','k','e','\0'};

    // Add some more characters
    myVector.push_back('!') ; 
    myVector.push_back('!') ; 
    myVector.push_back('!') ; 
    myVector.push_back('!') ; 
    myVector.push_back('!') ; 
    myVector.push_back('\0') ;

    for(int i=0; i < myVector.size(); i++){
        // .at(i) does bounds checking, versus
        // [i] which does not bounds check
        std::cout << myVector.at(i);
    }
    std::cout << std::endl;
 
    return 0;
}

