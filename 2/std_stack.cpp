/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 std_stack.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g std_stack.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file std_stack.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <stack>    // Include the stack library

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // The first parameter is the type
    std::stack<char> myStack;

    // Add elements to our stack 
    myStack.push('a');
    myStack.push('b');
    myStack.push('c');
    // peek at the top element
    std::cout << "top:" << myStack.top() << std::endl;
    // remove the top element
    myStack.pop();
    // peek at the top element
    std::cout << "top:" << myStack.top() << std::endl;
    // Report on the size
    std::cout << "size:" << myStack.size() << std::endl;



    return 0;
}
