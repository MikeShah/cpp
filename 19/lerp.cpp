// @file lerp.cpp
// g++ -g -std=c++20 lerp.cpp -o prog
// NOTE: We need c++20 for this!
#include <iostream>
#include <cmath>

int main(){

    float a=0.0;
    float b=100.0;

    for(float t=0.0; t<=1.0f; t+=0.1f){
        std::cout << "std::lerp(a,b,t)=" << std::lerp(a,b,t) << std::endl;
    }

    return 0;
}


