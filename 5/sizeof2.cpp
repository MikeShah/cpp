/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 sizeof2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g sizeof2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file sizeof2.cpp
#include <iostream> // I/O stream library
#include <vector>

// Entry point to program 'main' sizeof2
int main(int argc, char* argv[]){
    
    // Be careful however when using sizeof
    // with STL data structures however.
    std::vector<int> myVector;
    for(int i=0; i < 50; i++){
        myVector.push_back(i);
    }

    std::cout << "sizeof vector container     : " << sizeof(myVector) << std::endl;
    
    std::cout << "elements in vector container: " << myVector.size() << std::endl;



    return 0;
}

