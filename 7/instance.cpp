/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 instance.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g instance.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file instance.cpp
#include <iostream> // I/O stream library
#include <typeinfo> // Get type information

struct Student{
    int age;
};

struct Student2{
    int age;
};


// Entry point to program 'main' instance.cpp
int main(int argc, char* argv[]){
  
    Student s1; // Create an instance of an object
                // The type of this instance is 'Student'
    std::cout << "what type is s1?: " << typeid(s1).name() << std::endl;
    Student2 s2; // Create an instance of an object
                // The type of this instance is 'Student2'
    std::cout << "what type is s2?: " << typeid(s2).name() << std::endl;


    return 0;
}

