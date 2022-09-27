/////////////////////////////////////////////////
// Compile with: g++ -std=c++17 struct_private.cpp -o prog
// Run with    : ./prog
//
// Compile for debugging with:
// g++ -std=c++17 -g struct_private.cpp -o prog
// Run with gdb: gdb ./prog --tui
/////////////////////////////////////////////////

// @file struct_private.cpp
#include <iostream> // I/O stream library

struct myIntVector{
private:
	int size;	// Now size is hidden, cannot be accessed anywhere!
public: 
	int* storage;   
    myIntVector(int _size){	
    	storage = new int[_size]; 
        for(int i =0; i < _size; i++){
        	storage[i] = i;
        }
        size = _size;		
    }
    ~myIntVector(){delete[] storage;}
	// print method
	void print(){
    	for(int i =0; i < size; i++){
        	std::cout << storage[i] << "\n";
        }
    }
};

// Entry point to program 'main' struct_private.cpp
int main(){
	myIntVector a(20);
    // a.size = 5000;		// This line would not compile!
    a.print();
    
	return 0;
}
