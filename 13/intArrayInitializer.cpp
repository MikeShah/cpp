/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 intArrayInitializer.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g intArrayInitializer.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file intArrayInitializer.cpp
#include <iostream>

class IntArray{
// By default all of our member variables and
// member functions are private in a class
    int* m_storage; // Sometimes I prefix member variables
    int m_size;     // with 'm_' to indicate they are member variables
public:
    // Our constructor
    //
    //                    THIS is a subtle improvement on our
    //                    initialization of class members.
    //                    This is called a 'member initializer list'
    //                    in which we can avoid copies, and just directly
    //                    'move' values into our class.
    //                    We'll revisit this later idea later.
    IntArray(int _size) : m_storage(new int[_size]) ,m_size(_size) {
        std::cout << "Calling constructor" << std::endl;
//    	m_storage = new int[_size]; 
        for(int i =0; i < _size; i++){
        	m_storage[i] = i;
        }
//        m_size = _size;		// NO NEED to do assignment here
    }

    // Our destructor
    // Called automatically when our object goes out of scope
    ~IntArray()
    {
        std::cout << "Calling destructor" << std::endl;
        delete[] m_storage;
    }

    // @file intArrayInitializer.cpp
    // Copy constructor
    IntArray(const IntArray& copy){
        this->m_size = copy.m_size;
        this->m_storage = new int[m_size];
        for(int i=0;i<m_size;i++){
            m_storage[i] = copy.m_storage[i];
        }
    }

    // copy assignment operator
    IntArray& operator=(const IntArray& rhs){
        if(&rhs == this){
            return *this;
        }
        // If we previously had elements, before we
        // do the re-assignment, we want to delete our old
        // memory, otherwise, we'll leak memory!
        if(m_storage!=nullptr){
            delete[] m_storage;
        }

        this->m_size = rhs.m_size;
        this->m_storage = new int[m_size];
        for(int i=0; i < m_size;i++){
            m_storage[i] = rhs.m_storage[i];
        }
        return *this;
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


// Entry point to program 'main' intArrayInitializer.cpp
int main(){
	IntArray a(20);
//    IntArray b =a ;
    IntArray b(10);
    b = a;
    std::cout << "m_size = " << a.GetSize(); // Access value for read only
    a.Print();
    b.Print();

	return 0;
}
