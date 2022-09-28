/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 array2_std_copy.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g array2_std_copy.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file array2_std_copy.cpp
#include <iostream> // I/O stream library
#include <algorithm> // for std::copy

void PrintArray(char* array, size_t size){
    for(int i=0; i < size; i++){
        std::cout << array[i];
    }
    std::cout << std::endl;
}

// Entry point to program 'main'
int main(int argc, char* argv[]){

    // Initialize our array
    char myArray[] = {'m','i','k','e','\0'};
    
    // Allocate a larger array
    char myCopy[10];

    // Copy elements 1 at a time
    std::copy(std::cbegin(myArray),std::cend(myArray),myCopy);

    // Add some more characters
    myCopy[4] = '!' ; 
    myCopy[5] = '!' ; 
    myCopy[6] = '!' ;
    myCopy[7] = '!' ; 
    myCopy[8] = '!' ;
    myCopy[9] = '\0' ;

    PrintArray(myArray,5);
    PrintArray(myCopy,10);
 
    return 0;
}

