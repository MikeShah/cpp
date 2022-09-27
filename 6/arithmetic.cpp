
// g++ -std=c++17 -g arithmetic.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file arithmetic.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' arithmetic
int main(int argc, char* argv[]){
   
    // dynamically allocate an array
    int* arr = new int[3];
    // Initialize some values
    arr[0] = 11;
    arr[1] = 14;
    arr[2] = 24;

    // We can index into the array as follows
    std::cout << arr[0] << "," 
			  << arr[1] << "," 
			  << arr[2] << std::endl;

    // Or, we can step to the next element using pointer arithmetic
    std::cout << *(arr+0) << "," 
			  << *(arr+1) << "," 
			  << *(arr+2) << std::endl;

    // delete the dynamically allocated array
    delete[] arr;

    return 0;
}

