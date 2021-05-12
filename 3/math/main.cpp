#include <iostream>

#include "math.hpp"

void doWork(){
    std::cout << "add(7,2) = " << add(7,2) << std::endl;
    std::cout << "multiply(7,2) = " << multiply(7,2) << std::endl;
}

int main(){

    doWork();

    return 0;
}
