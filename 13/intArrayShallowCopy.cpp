/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 intArrayShallowCopy.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g intArrayShallowCopy.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file intArrayShallowCopy.cpp
#include <iostream>

class IntArray{
// By default all of our member variables and
// member functions are private in a class
    int* m_storage; // Sometimes I prefix member variables
    int m_size;     // with 'm_' to indicate they are member variables
public:
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

    // The 'const' at the end of the member function ensures
    // that none of the member variables will be changed
    // This this function is read-only
    int GetSize() const{
        return m_size;
    }

};


// Entry point to program 'main' intArrayShallowCopy.cpp
int main(){
	{
			IntArray a(20);
			IntArray b=a; // Invoke the 'compiler copy constructor


			std::cout << "m_size = " << a.GetSize() << std::endl; // Access value for read only
			a.Print();
	}
	std::cout << "Did I reach here?\n";
	return 0;
}















