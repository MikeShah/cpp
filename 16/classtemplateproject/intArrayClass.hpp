#ifndef ARRAY_HPP
#define ARRAY_HPP

namespace mike{

// @file classtemplateproject/intArrayClass.hpp
template<class T>
	class Array{
	// By default all of our member variables and
	// member functions are private in a class
		T* m_storage; // Sometimes I prefix member variables
		int m_size;     // with 'm_' to indicate they are member variables
	public:
		// Our constructor
		Array(int _size);
		// Destructor
		~Array();
		// Copy constructor
		Array(const Array& copy);
		// copy assignment operator
		Array& operator=(const Array& rhs);

		void Print();

		int GetSize() const;
	};

}

// Implementation file of our template header
#include "intArrayClass.impl"

#endif
