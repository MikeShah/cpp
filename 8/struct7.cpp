/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 struct7.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g struct7.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct7.cpp
#include <iostream> // I/O stream library

struct Point2D{
    public: // By default access level is public in
            // a 'struct' in C++
    float x;
    float y;

    // Publically available Member Function
    void Print(){
        std::cout << this 
                  << " Point2D(" 
                  << x << "," << y << ")"
                  << std::endl;
    }

    // Note: We can use 'this' in front of
    //       a member variable to make
    //       our use of the same named
    //       variables less ambiguous
    void SetXY(float x, float y){
        // this.x is the 'internal member variable'
        // 'x' is the argument passed into the member
        // function
        this->x = x;
        this->y = y;
    }
};

// @file struct7.cpp
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

