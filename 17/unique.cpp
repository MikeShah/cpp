/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 unique.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g unique.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file unique.cpp
#include <iostream> // I/O stream library
#include <memory>   // Access smart pointers

class Object{
public:
    Object() { std::cout << "Constructor\n"; }
    ~Object() { std::cout << "Destructor\n"; }
};


// Entry point to program 'main' unique
int main(int argc, char* argv[]){

    {
        std::unique_ptr<Object> myObjectPtr(new Object);
        // NOTE: Below is 'illegal' because we cannot
        //       assign to a unique_ptr--awesome!
        //std::unique_ptr<Object> myObjectPtr2 = myObjectPtr;
    }

    // An alternative way to create the pointer
    // Much more explict, avoids the call to 'new'
    // Also does some error handling.
    {
        std::unique_ptr<Object> myObjectPtr = std::make_unique<Object>();
    }



    return 0;
}

