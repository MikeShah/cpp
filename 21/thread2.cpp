/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 thread2.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g thread2.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file thread2.cpp
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

#define THREAD_COUNT 100

std::mutex g_accumulation_mutex;
int g_accumulation=0; // shared value acted upon by multiple threads.

void add(int x){
    g_accumulation_mutex.lock();
        g_accumulation += x;
    g_accumulation_mutex.unlock();
}

// Entry point to program 'main' thread2.cpp
int main(){

    // This will hold our threads
    std::vector<std::thread> threads;
    for(int i=0; i < THREAD_COUNT; i++){
        threads.push_back(std::thread(&add,1));
    }
    // Now we have to join all of our threads.
    for(auto& th : threads){ //for-each loop
        th.join();           // This loop will look t hrough all of
                             // our threads, and we refer to them
                             // as 'th'.
    }

    std::cout << "g_accumulation is: " << g_accumulation << std::endl;

    return 0;
}

