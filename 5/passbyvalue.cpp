// @passbyvalue.cpp
#include <iostream>

void setValue(int a){
	std::cout << "address a:" << &a << '\n';
	
	a= 9999;
}

int main(){

	int x= 42;
	std::cout << "address x:" << &x << '\n';
	setValue(x);
	std::cout << "x is : " << x << '\n';

	return 0;
}
