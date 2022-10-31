/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 templateFriend.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g templateFriend.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file templateFriend.cpp
#include <iostream>

namespace mike{
    template<class T>
    class Array{
    // By default all of our member variables and
    // member functions are private in a class
        T* m_storage; // Sometimes I prefix member variables
        int m_size;     // with 'm_' to indicate they are member variables
    public:
        // Our constructor
        Array(int _size){
            std::cout << "Calling constructor" << std::endl;
            m_storage = new T[_size]; 
            for(int i =0; i < _size; i++){
                m_storage[i] = i;
            }
            m_size = _size;		// save size;
        }

        // Our destructor
        // Called automatically when our object goes out of scope
        ~Array()
        {
            std::cout << "Calling destructor" << std::endl;
            delete[] m_storage;
        }

        // Copy constructor
        Array(const Array& copy){
            this->m_size = copy.m_size;
            this->m_storage = new T[m_size];
            for(int i=0;i<m_size;i++){
                m_storage[i] = copy.m_storage[i];
            }
        }

        // copy assignment operator
        Array& operator=(const Array& rhs){
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
            this->m_storage = new T[m_size];
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


}


// Entry point to program 'main' templateFriend.cpp
int main(){

    // IntArray is now in the class scope, with
    // the namespace 'mike'
    mike::Array<bool> a(20);
//    IntArray b =a ;
    mike::Array<bool> b(10);
    b = a;
    std::cout << "m_size = " << a.GetSize(); // Access value for read only
    a.Print();
    b.Print();

	return 0;
}
