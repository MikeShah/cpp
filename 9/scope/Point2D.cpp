// @file scope/Point2D.cpp
#include "Point2D.hpp"

// Note: Within our implementation we need
//  	 to include any files we need.
//  	 This 'Point2D.hpp' file should be
//  	 able to 'stand alone' without any
//  	 knowledge of other .cpp files.
#include <iostream>

// Publically available Member Function
void Point2D::Print(){
	std::cout << this 
		  << " Point2D(" 
		  << x << "," << y << ")"
		  << std::endl;
}

// Note: We can use 'this' in front of
//       a member variable to make
//       our use of the same named
//       variables less ambiguous
void Point2D::SetXY(float x, float y){
	// this.x is the 'internal member variable'
	// 'x' is the argument passed into the member
	// function
	this->x = x;
	this->y = y;
}


