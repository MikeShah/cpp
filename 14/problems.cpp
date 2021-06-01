/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 problems.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g problems.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file problems.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' problems
int main(int argc, char* argv[]){

    // (1) Dereference nullptr
    float* p_float = nullptr;
    *p_float = 7.0f; // ERROR - Dereferencing a null pointer

    // (2) Double free
    int* array = new int[10];
    delete[] array; 
    delete[] array; // ERROR - 'Double free'

    // (3) Dangling pointer - refering to something that
    //                        has already been deleted
    int* shared_array = new int[10];
    int* pointer_to_array = shared_array;
    delete[] shared_array;
    pointer_to_array[0] = 7; // ERROR - Cannot derefernce, because
                             //         we deleted the shared_array
                             //         that we were pointing to.


    return 0;
}

