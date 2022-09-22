// @passbyreference.cpp
#include <iostream>

void setValue(int& alias){
	std::cout << "address alias:" << &alias << '\n';
	
	alias= 9999;
}

// v's size is 1,000,000,000
// ** think about why we do this for efficiency**
//
void PrintVector(const std::vector<int>& v){
	for(int i=0; i < v.size(); i++)
		std::cout << v[0];
}

int main(){

	int x= 42;
	std::cout << "address x:" << &x << '\n';
	setValue(x);
	std::cout << "x is : " << x << '\n';

	return 0;
}
