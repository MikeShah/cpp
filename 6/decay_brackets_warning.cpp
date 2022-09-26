// @file decay_brackets_warning.cpp
// g++ -g -std=c++17 decay2.cpp -o prog
#include <iostream>

// This will give a warning if you pass in a pointer
// type that the converson is taking place
void arrayDecay(short arr[]){
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


