//@file list.cpp
#include <iostream>

struct Node{
    int data;
    Node* next;
    // or you can type 'struct Node* next;'
};


void printList(Node* root){
    // Responsible for pointing to the next node.
    Node* iterator;
    iterator = root;
    while(iterator != nullptr){
        std::cout << iterator->data << " ";
        iterator = iterator->next;
    }

}

int main(){

    Node n1;
    Node n2;
    Node n3;
    
    n1.data = 1;
    n1.next = &n2;

    n2.data = 2;
    n2.next = &n3;

    n3.data = 3;
    n3.next = nullptr;

    printList(&n1);

    return 0;
}
