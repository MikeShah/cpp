//@file copyassignment.cpp
#include <iostream>

class T{
    int data;
public:
    T(){ std::cout << "constructor called\n"; }
    ~T(){ std::cout << "destructor called\n"; }
    // Copy constructor
    T(const T& copy){
        std::cout << "copy constructor called\n";
        this->data = copy.data;
    }
    // Copy assignment
    T& operator=(const T& rhs){
        std::cout << "copy assignment operator called\n";
        // Special case, meaning, avoid copying ourselves
        if(&rhs == this){
            return *this;
        }
        this->data = rhs.data;

        return *this;
    }
    void SetData(int value){
        data = value;
    }
    void printData(){
        std::cout << this << ": " << data << std::endl;
    }
};

int main(){

    T object1;
    object1.SetData(77);
    T object2 = object1;
    T object3;

    // Copy Assignment here
    object3 = object1; // a.k.a: object1=(object3);

    object1.printData();
    object2.printData();
    object3.printData();


    // This is wher %rbp will return
    return 0;
}
