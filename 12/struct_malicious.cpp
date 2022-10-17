/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 struct_malicious.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g struct_malicious.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct_malicious.cpp
#include <iostream>

struct myIntVector{
public: // By default this is implicit in a struct
	int* storage;
    int size;
    myIntVector(int _size){	// A constructor
    	storage = new int[_size]; 
        for(int i =0; i < _size; i++){
        	storage[i] = i;
        }
        size = _size;		// save size;
    }
    ~myIntVector(){delete[] storage;}
	// print method
	void print(){
    	for(int i =0; i < size; i++){
        	std::cout << storage[i] << "\n";
        }
    }
};


// Entry point to program 'main' struct_malicious.cpp
int main(){
	myIntVector a(20);
    a.size = 5000; // hehe -- I am malicious or otherwise 
    a.print();     //         unknowingly breaking the behavior
                   //         of this program
	return 0;
}
