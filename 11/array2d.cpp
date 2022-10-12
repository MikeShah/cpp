/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 array2d.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g array2d.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file array2d.cpp
#include <iostream> // I/O stream library

void printArray(int* array, int w, int h){
    for(int y=0; y < h; y++){
        for(int x=0; x < w; x++){
            std::cout << array[y*w+x] << "\t";
        }
        std::cout << std::endl;
    }
}

// Entry point to program 'main' array2d.cpp
int main(int argc, char* argv[]){

    const int width = 4;
    const int height = 3;

    int* array = new int[width*height];

    int value=0;
    for(int y=0; y < height; y++){
        for(int x=0; x < width; x++){
            array[y*width+x] = value;
            value++;
        }
    }

    printArray(array,width,height);

    
    return 0;
}

