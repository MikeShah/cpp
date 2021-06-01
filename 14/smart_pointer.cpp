/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 smart_pointer.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g smart_pointer.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file smart_pointer.cpp
#include <iostream> // I/O stream library

// Let's build a smart pointer for handling integers.
class SmartIntPointer{
private:
    int* m_pointer = nullptr; // initialize the pointer
public:
    // Handle creation of our 
    SmartIntPointer(){
        m_pointer = nullptr;
    }
    // Destructor
    ~SmartIntPointer(){
        if(m_pointer!=nullptr){
            delete m_pointer;
        }
    }
    // Handle dereferencing
    int* operator->(){
        return this->m_pointer;
    }
    // And more....
    // To be continued when we learn about move semantics...


};

// Entry point to program 'main' smart_pointer
int main(int argc, char* argv[]){

    SmartIntPointer myPointer;

    return 0;
}

