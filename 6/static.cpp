/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 static.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g static.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file static.cpp
#include <iostream> // I/O stream library
#include <cstdlib>
#include <ctime>

int* g_pointer;

void important(){
    static int x = 0;
    x  = rand() % 10 + 1;
    std::cout << "x is: " << x << std::endl;
    g_pointer = &x;
}

void function(){
    int x = 9999;
    int y = 10000;
    int a = 10001;
    int b = 10002;
}

// Entry point to program 'main' static.cpp
int main(int argc, char* argv[]){

    srand(time(NULL));

    for(int i=0; i < 1000; i++){
        important();
    }

    std::cout << "g_pointer is: " << *g_pointer << std::endl;
    
    return 0;
}

