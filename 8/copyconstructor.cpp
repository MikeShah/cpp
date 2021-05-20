//@file copyconstructor.cpp
#include <iostream>

class T{
public:
    T(){ std::cout << "constructor called\n"; }
    ~T(){ std::cout << "destructor called\n"; }
    
    T(const T& copy){
        std::cout << "copy constructor called\n";
    }
};

int main(){

    T object1;
    T object2 = object1;
    T object3(object1);


    // This is wher %rbp will return
    return 0;
}
