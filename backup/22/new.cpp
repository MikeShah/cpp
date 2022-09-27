/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 new.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g new.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file new.cpp
#include <iostream>
#include <map>

/*
void* operator new(size_t size){
    std::cout << "Bytes allocateed " << size << std::endl;;
    void* memory = malloc(size);
    return memory;
}

void operator delete(void* memory,size_t size){
    std::cout << "Bytes being freed " << size << std::endl;;
    return free(memory);
}

void operator delete[](void* memory){
    std::cout << "Bytes being freed " << std::endl;;
    return free(memory);
}
*/

// Entry point to program 'main' new.cpp
int main(){

    int* arrayOfInts = new int[1000];
    delete[] arrayOfInts;

    return 0;
}

