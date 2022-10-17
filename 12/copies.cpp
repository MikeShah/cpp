//@file copies.cpp
#include <iostream>

class T{
public:
    T(){ std::cout << "constructor called\n"; }
    ~T(){ std::cout << "destructor called\n"; }
    
    T(const T& copy){
        std::cout << "copy constructor called\n";
    }
};

// Pass by Value
void functionValue(T object){
    // Remember why we pass by value 
    // versus pass by reference?
    // Observe the extra copies made!
}

// Pass by Ref
void functionRef(const T& object){
    // Remember why we pass by value 
    // versus pass by reference?
    // Observe the extra copies made!
}

int main(){

    T object1;

    for(int i=0; i < 10; i++){
        //functionValue(object1);
        // UNCOMMENT THE LINE BELOW AND
        // COMMENT THE LINE ABOVE TO SEE THE DIFFERNCE
        functionRef(object1);
    }




    // This is wher %rbp will return
    return 0;
}
