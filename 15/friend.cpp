/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 friend.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g friend.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file friend.cpp
#include <iostream>

class SomeClass{
public:
    SomeClass(){}
    ~SomeClass(){}
    int GetPrivateValue() { 
        return m_privateValue; 
    }
    // Declare that this function is a 'friend'
    // of the class, and thus can see *anything* inside
    // of the class
    friend void FriendFunctionOfSomeClass(SomeClass& s);
private:
    int m_privateValue;
};

// friend function can access the private member
// variables of a class
void FriendFunctionOfSomeClass(SomeClass& s){
    s.m_privateValue = 42;
}

// Entry point to program 'main' friend.cpp
int main(){
    SomeClass object;
    FriendFunctionOfSomeClass(object);
    std::cout << "private value of object is now:" << object.GetPrivateValue() << std::endl;

	return 0;
}
