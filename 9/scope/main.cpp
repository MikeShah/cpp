/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 main.cpp Point2D.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g main.cpp Point2D -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file scope/main.cpp
#include <iostream> // I/O stream library

#include "Point2D.hpp"

// @file scope/main.cpp
int main(){

    // Stack allocated
    Point2D pointsOnStack[10];
    for(int i=0; i < 10; ++i){
        pointsOnStack[i].SetXY(i,i);
        pointsOnStack[i].Print();
    }

    // Heap allocated
    Point2D* heapAllocatedPointsArray = new Point2D[10];
    for(int i=0; i < 10; ++i){
        heapAllocatedPointsArray[i].SetXY(i*5,i*5);
        heapAllocatedPointsArray[i].Print();
    }


    delete[] heapAllocatedPointsArray;

    return 0;
}

