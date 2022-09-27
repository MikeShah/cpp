/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 async.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g async.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file async.cpp
#include <iostream>
#include <thread> // thread
#include <future> // async
#include <string>
#include <chrono> // time library

// Simulates loading a really big file, or piece of data.
bool fileLoading(std::string filename){
    int bytesLoaded =0;
    while(bytesLoaded < 20000){
        std::cout << "Loading file: " << filename << std::endl;
        // Put a pause, or halt in our thread.
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
        bytesLoaded+= 1000;
    }

    return true;
}


// Entry point to program 'main' async.cpp
int main(){

    // Launches asynchronously, and will happen,
    // in a background thread, while our program executes.
    std::future<bool> future= std::async(std::launch::async, fileLoading,"my really large dataset.txt"); 

    // Meanwhile, while our program executes, we
    // do other tasks...
    unsigned int iterations =0;
    while(iterations < 10){
        std::cout << "Program is running" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        iterations++;
    }
    return 0;
}

