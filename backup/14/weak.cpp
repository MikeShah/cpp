/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 weak.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g weak.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file weak.cpp
#include <iostream> // I/O stream library
#include <memory>   // Access smart pointers

class Object{
public:
    Object() { std::cout << "Constructor\n"; }
    ~Object() { std::cout << "Destructor\n"; }
};


// Entry point to program 'main' weak
int main(int argc, char* argv[]){
 
    {
        // weak_ptr is almost like a 'temporary' pointer that we just
        // want to be able to point to something if it exists.
        std::weak_ptr<Object> myWeakPtr;
        {
            // Make a second pointer
            std::shared_ptr<Object> mySharedObjectPtr2 = std::make_shared<Object>();
            // Assign our weak pointer to a shared pointer, but
            // we do not increase the reference count on sharedObjectPtr2.
            myWeakPtr = mySharedObjectPtr2;
        }
    }

    return 0;
}

