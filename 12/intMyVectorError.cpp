/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 intArrayError.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g intArrayError.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file intArrayError.cpp
#include <iostream>

struct myIntVector{
// By default all of our member variables and
// member functions are public

private:
    int* m_storage; // Sometimes I prefix member variables
    int m_size;     // with 'm_' to indicate they are member variables

public:	
    // Our constructor
    myIntVector(int _size){
        std::cout << "Calling constructor" << std::endl;
    	m_storage = new int[_size]; 
        for(int i =0; i < _size; i++){
        	m_storage[i] = i;
        }
        m_size = _size;		// save size;
    }

    // Our destructor
    // Called automatically when our object goes out of scope
    ~myIntVector()
    {
        std::cout << "Calling destructor" << std::endl;
        delete[] m_storage;
    }

	// print member function
	void print(){
    	for(int i =0; i < m_size; i++){
        	std::cout << m_storage[i] << "\n";
        }
    }
};


// Entry point to program 'main' intArrayBad.cpp
int main(){
	myIntVector a(20);
    myIntVector.m_size = 2; // Hehe, I am a malicious user
    a.print();
    
	return 0;
}
