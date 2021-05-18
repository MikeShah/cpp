/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 heap.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g heap.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file heap.cpp
#include <iostream> // I/O stream library
#include <cstdlib>
#include <ctime>


int* important(){
    int* x = new int;
    (*x) = rand() % 10 + 1;
    std::cout << "x is: " << *x << std::endl;

    return x;
}

// Entry point to program 'main' heap.cpp
int main(int argc, char* argv[]){

    srand(time(NULL));

    for(int i=0; i < 1000; i++){
        // We are assigning our pointer
        // that we initalize, the the address
        // of something allocated on the heap in 'important'
        int* temporary = important();

        // Now we can use that memory
        std::cout << "temporary: " << *temporary << std::endl;
        // And we still need to delete our heap memory
        // before we end our program.
        delete temporary;
    }
    
    return 0;
}

