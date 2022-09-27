// Compile with: 
// g++ -std=c++17 -g main.cpp AdjacencyList.cpp -o prog

#include "AdjacencyList.hpp"

bool unitTest1(){
    AdjacencyList list;
    list.AddNode("A");
    list.AddNode("B");
    list.AddNode("C");

    list.AddDirectedEdge("A","B");
    list.AddDirectedEdge("A","C");
    list.AddDirectedEdge("B","C");

    list.print();

    return true;
}


int main(){

    unitTest1();

    return 0;
}
