// @file decay2.cpp
// g++ -g -std=c++17 decay2.cpp -o prog
#include <iostream>

void arrayDecay(short* arr){
    std::cout << "sizeof(arr)  : " 
			  << sizeof(arr) 
			  << std::endl;
}

int main(){

    short array[6];
    for(int i=0; i < 6; i++){
        array[i] = i;
    }  
    
    std::cout << "sizeof(array): " 
			  << sizeof(array) << std::endl;
	// Passing 'array' into function decays into pointer
	arrayDecay(array);

    return 0;
}


