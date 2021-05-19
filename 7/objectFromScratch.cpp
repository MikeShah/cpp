/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 objectsFromScratch.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g objectsFromScratch.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file objectsFromScratch.cpp
#include <iostream> // I/O stream library

// This is how we would have to use
// C++ if we did not have, object oriented programming
// built in.
// We would have 'pointers to functions' as our
// member variables.
// We would also, very painfully, have to set all
// of these pointers to functions, and pass in
// by value, each of our objects.
struct Student{
    int age;
    void (*printFunc)(struct Student*);
};

// Here we are passing in by value, an instance of 
// an object that we want to operate the data on.
void print(struct Student* s){
    std::cout << "Students age: " << s->age << "\n";
    std::cout << "Students age: " << (*s).age << "\n";
}

// Entry point to program 'main' objectsFromScratch.cpp
int main(int argc, char* argv[]){
  
    Student mike;
    mike.age = 87;
    // Here we are painfully, setting up, every
    // function pointer to loose functions in our program.
    mike.printFunc = &print;
    mike.printFunc(&mike);

    return 0;
}

