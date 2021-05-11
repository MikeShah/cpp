/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 std_queue.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g std_queue.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file std_queue.cpp
// Bring in a header file on our include path
// this happens to be in the standard library
// (i.e. default compiler path)
#include <iostream>
#include <queue>    // Include the queue library

// Entry point to program 'main' function
int main(int argc, char* argv[]){

    // The first parameter is the type
    std::queue<char> myQueue;

    // Add elements to our queue 
    myQueue.push('a');
    myQueue.push('b');
    myQueue.push('c');
    // peek at the first element
    std::cout << "front:" << myQueue.front() << std::endl;
    // remove the first element
    myQueue.pop();
    // peek at the first element
    std::cout << "front:" << myQueue.front() << std::endl;
    // Report on the size
    std::cout << "size:" << myQueue.size() << std::endl;



    return 0;
}
