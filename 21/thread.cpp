/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 thread.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g thread.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file thread.cpp
#include <iostream>
#include <thread>

// Test function where we'll create a new thread.
void test(int x){
    std::cout << "Hello from our thread" << std::endl;
    std::cout << "Argument passed to thread is: " << x << std::endl;
}

// Entry point to program 'main' thread.cpp
int main(){
    // Create a new thread and pass in a value for
    // it's first parameter.
    std::thread myThread(&test,100);
    // Join with the main thread, which is the same as
    // saying "hey, wait until the main thread finishes executing.
    myThread.join(); // Join with the thread, it was called from.
                     // which in this case, is the main thread.
    std::cout << "Hello from the main thread!" << std::endl;

    return 0;
}
