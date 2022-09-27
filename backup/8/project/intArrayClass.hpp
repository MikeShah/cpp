// @file intArrayClass.hpp
#ifndef INTARRAY_HPP
#define INTARRAY_HPP

// Interface (the header file)
class IntArray{
// By default all of our member variables and
// member functions are private in a class
    int* m_storage; // Sometimes I prefix member variables
    int m_size;     // with 'm_' to indicate they are member variables
public:
    IntArray(int _size);
    ~IntArray();
    IntArray(const IntArray& copy);
    IntArray& operator=(const IntArray& rhs);
    void Print();
    int GetSize() const;
};

#endif
