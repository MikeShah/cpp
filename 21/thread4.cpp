/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 thread4.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g thread4.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file thread4.cpp
#include <iostream>
#include <thread>
#include <vector>
#include <condition_variable>
#include <mutex>


std::condition_variable g_cond_var;
std::mutex global_mutex;

// Entry point to program 'main' thread4.cpp
int main(){

    int value = 1009;
    bool notified = false;

    std::thread reporter([&]{
        std::unique_lock<std::mutex> lock(global_mutex);
        while(!notified){
            g_cond_var.wait(lock);
        }
        std::cout << "Print the value as: " << value << std::endl;
    });

    std::thread assigner([&]{
        value = 42;
        notified = true;
        std::cout << "running thread assigner first" << std::endl;
        g_cond_var.notify_one();
    });
    
    reporter.join();
    assigner.join();

    return 0;
}

