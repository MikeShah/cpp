//@file array
#include <iostream>

// Allocate memory in an array for us
// And some helper member functions.
// (More powerful than a raw array)
// (Somewhat how std::array is implemented)
struct IntArray{
    int m_size;
    int* m_storage;

    // Constructor
    // What is called, when we first create the instance
    // of this object
    // (Constructors are named the same as the class)
    IntArray(int size){
        m_size = size;
        std::cout << "Constructor called" << std::endl;
        // Now we need to allocate our storage
        m_storage = new int[m_size];
        // Initialize m_storage values
        for(int i=0; i < m_size; i++){
            m_storage[i] = i;
        }
    }
    // Destructor
    // Also, named the same as the 'struct'
    ~IntArray(){
        std::cout << "Destructor called" << std::endl;
        delete[] m_storage;
    }

    // Member function called 'print'
    // Which will print out all of the values
    void print(){
        for(int i=0; i < m_size; i++){
            std::cout << m_storage[i] << std::endl;
        }
    }

};

int main(){

    IntArray test(50);
    test.print();

    return 0;
}
