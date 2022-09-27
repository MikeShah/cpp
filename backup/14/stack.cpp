/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 stack.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g stack.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file stack.cpp
#include <iostream> // I/O stream library
#include <cstring>

// Global piece of data
char* g_pointer;

void foo(){
    // Chunk of memory, allocated in foo
    char array[100];
    
    std::memset(array,65,sizeof(char)*100);

    g_pointer = &array[0];
    std::cout << "g_pointer: " << g_pointer[0] << std::endl;
}


// Entry point to program 'main' stack
int main(int argc, char* argv[]){
    g_pointer = new char[1];

    // Stack allocated
    char* p_main = nullptr;
    foo();
    char array[9000];
    std::memset(array,66,sizeof(char)*9000);

    std::cout << "g_pointer: " << g_pointer[0] << std::endl;
    return 0;
}

