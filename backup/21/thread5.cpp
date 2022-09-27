/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 thread5.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g thread5.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file thread5.cpp
#include <iostream>
#include <future>

int square(int x){
    return x*x;
}

// Entry point to program 'main' thread5.cpp
int main(){

    // So 'a' is a future.
    // Type 'whatis a' in gdb
    // type = std::future<int>
    auto a = std::async(&square,12);
    // ... some time passes
    int v = a.get(); // Then we retrieve the value from 'a'
                     // and if it hasn't completed execution at this point
                     // then our program will wait until it does.
    std::cout << "The async thread has returned " << v << std::endl;

    return 0;
}

