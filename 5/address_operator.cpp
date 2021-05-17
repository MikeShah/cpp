// @addresss_operator.cpp
#include <iostream> 

int main(){

    int x = 5;
    int& iamareference = x;

    std::cout << " address of x is: " << &(x) << std::endl;

    return 0;
}
