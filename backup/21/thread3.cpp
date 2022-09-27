/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 thread3.cpp -o prog -lpthread
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g thread3.cpp -o prog -lpthread
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file thread3.cpp
#include <iostream>
#include <thread>
#include <vector>
#include <atomic>

#define THREAD_COUNT 100

std::atomic<int> g_accumulation=0; // shared value acted upon by multiple threads.

void add(int x){
        g_accumulation += x;
}

// Entry point to program 'main' thread3.cpp
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

