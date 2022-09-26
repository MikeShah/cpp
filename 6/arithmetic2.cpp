/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 arithmetic2.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g arithmetic2.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file arithmetic2.cpp
#include <iostream> // I/O stream library

// Entry point to program 'main' arithmetic2
int main(int argc, char* argv[]){
   
    int* arr = new int[3];
    arr[0] = 11;
    arr[1] = 14;
    arr[2] = 24;

    // Note: In this example, note that we are moving the
    //       'address' of the data by '4' each time we increment.
    //       Why 4 bytes? Because that's the sizeof(int).
    std::cout << arr+0 << "," << arr+1 << "," << arr+2 << std::endl;

    delete[] arr;

    return 0;
}

