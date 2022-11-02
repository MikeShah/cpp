/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 shared.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g shared.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file shared.cpp
#include <iostream> // I/O stream library
#include <memory>   // Access smart pointers

class Object{
public:
    Object() { std::cout << "Constructor\n"; }
    ~Object() { std::cout << "Destructor\n"; }
};


// Entry point to program 'main' shared
int main(int argc, char* argv[]){


    // This is how we 'always' want to create shared_ptr using
    // 'make_shared'
    // Again, we avoid using 'new'
    {
        std::shared_ptr<Object> mySharedObjectPtr;
        {
            // Make a second pointer
            std::shared_ptr<Object> mySharedObjectPtr2 = std::make_shared<Object>();
            // Assign our shared pointer to another shared pointer
            mySharedObjectPtr = mySharedObjectPtr2;
        }
    // At this point, mySharedObjectptr will 'die' but only because all of its
    // references have gone out of scope.
    }
    return 0;
}

