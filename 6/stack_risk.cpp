/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 stack_risk.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g stack_risk.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file stack_risk.cpp
#include <iostream> // I/O stream library
#include <cstdlib>
#include <ctime>

// Global variable (For demonstration purposes)
int* g_pointer = nullptr;

void important(){
	// Stack allocated variable
    int x = rand() % 10 + 1;
    std::cout << "x is: " << x << std::endl;
    // point our pointer to the address
    // of our random number
    g_pointer = &x;
}

void function(){
    int x = 9999;
    int y = 9998;
    int a = 9997;
}

// Entry point to program 'main' stack_risk.cpp
int main(int argc, char* argv[]){

    srand(time(NULL));

    for(int i=0; i < 1000; i++){
        important();
        function();
    }
    // What will the value be?
	// *Hint* I NEVER assign g_pointer to 9999, but
	//        think about stack memory.
    std::cout << "g_pointer: " 
			  << *g_pointer << std::endl;
    
    return 0;
}

