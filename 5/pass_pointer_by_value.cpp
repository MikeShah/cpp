/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 pass_pointer_by_value.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g pass_pointer_by_value.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file pass_pointer_by_value.cpp
#include <iostream> // I/O stream library

void func(int* pointer_param){
    std::cout << "pointer_param address is: "
              << &pointer_param << std::endl;
    // However, the address that x points to is copied
    // so that means we can still derference it.
    *pointer_param = 9999;

}


// Entry point to program 'main' pass_pointer_by_value
int main(int argc, char* argv[]){
   
    int x = 5;
    std::cout << "x address in main is    : " << &x << std::endl;
    // Pass in the address of 'x' because
    // the input parameter is a pointer.
    func(&x);
    // Print out value of x
    std::cout << "x is: " << x << std::endl;

    return 0;
}

