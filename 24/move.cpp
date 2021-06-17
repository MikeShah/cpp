/////////////////////////////////////////////////
// Compile with: g++ -std=c++20 move.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++20 -g move.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file move.cpp
#include <iostream>
#include <utility> // std::move

class T{
public:
    T(){ std::cout << "constructor" << std::endl;}
    ~T(){ std::cout << "destructor" << std::endl;}
    T(const T& copy){ 
        std::cout << "copy constructor" << std::endl;
    }
    // Move constructor which transfers ownership of our
    // object, rather than creating a new object
    T(T&& old){
        m_string = old.m_string;
        old.m_string = nullptr;
    }
    // Move assignment operator
    T& operator=(T&& old){
        if(this!=&old){
            m_string = old.m_string;
            old.m_string = nullptr; 
        }
        return *this;
    }

char* m_string;

};

void swap(T a, T b){
    T tmp{std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

// Entry point to program 'main' move.cpp
int main(){

    T a;
    T b;
    swap(a,b);

    return 0;
}

