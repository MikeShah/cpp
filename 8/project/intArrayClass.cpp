// @file intArrayClass.cpp
#include <iostream>

#include "intArrayClass.hpp"

// Implementation
// Our constructor
IntArray::IntArray(int _size){
    std::cout << "Calling constructor" << std::endl;
    m_storage = new int[_size]; 
    for(int i =0; i < _size; i++){
        m_storage[i] = i;
    }
    m_size = _size;		// save size;
}

// Our destructor
// Called automatically when our object goes out of scope
IntArray::~IntArray()
{
    std::cout << "Calling destructor" << std::endl;
    delete[] m_storage;
}

// Copy constructor
IntArray::IntArray(const IntArray& copy){
    this->m_size = copy.m_size;
    this->m_storage = new int[m_size];
    for(int i=0;i<m_size;i++){
        m_storage[i] = copy.m_storage[i];
    }
}

// copy assignment operator
IntArray& IntArray::operator=(const IntArray& rhs){
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
void IntArray::Print(){
    for(int i =0; i < m_size; i++){
        std::cout << m_storage[i] << "\n";
    }
}

// The 'const' at the end of the member function ensures
// that none of the member variables will be changed
// This this function is read-only
int IntArray::GetSize() const{
    return m_size;
}
