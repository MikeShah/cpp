/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 intArrayBad.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g intArrayBad.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file intArrayBad.cpp
#include <iostream>

struct IntArray{
// By default all of our member variables and
// member functions are pbulic
public:	
    int* m_storage; // Sometimes I prefix member variables
    int m_size;     // with 'm_' to indicate they are member variables

    // Our constructor
    IntArray(int _size){
        std::cout << "Calling constructor" << std::endl;
    	m_storage = new int[_size]; 
        for(int i =0; i < _size; i++){
        	m_storage[i] = i;
        }
        m_size = _size;		// save size;
    }

    // Our destructor
    // Called automatically when our object goes out of scope
    ~IntArray()
    {
        std::cout << "Calling destructor" << std::endl;
        delete[] m_storage;
    }

	// print member function
	void Print(){
    	for(int i =0; i < m_size; i++){
        	std::cout << m_storage[i] << "\n";
        }
    }
};


// Entry point to program 'main' intArrayBad.cpp
int main(){
	IntArray a(20);
    a.m_size = 2; // Hehe, I am a malicious user
    a.Print();
    
	return 0;
}
