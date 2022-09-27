#include "AdjacencyList.hpp"
#include <iostream>

AdjacencyList::AdjacencyList(){

}

AdjacencyList::~AdjacencyList(){

}

void AdjacencyList::AddNode(std::string name){
    std::shared_ptr<node_t> newNode = std::make_shared<node_t>();
    newNode->name = name;

    m_nodes.push_back(newNode);
}

void AdjacencyList::AddDirectedEdge(std::string source, std::string destination){
    // Find our pointer to our destination
    std::shared_ptr<node_t> dest=nullptr;
    for(int i=0; i < m_nodes.size(); i++){
        if(destination==m_nodes[i]->name){
            dest=m_nodes[i];
        }
    }

    // Adding our node to us as a neighbor
    for(int i=0; i < m_nodes.size(); i++){
        if(source==m_nodes[i]->name){
            m_nodes[i]->neighbors.push_back(dest);
        }
    }
}


void AdjacencyList::print(){

    // Looking through our 'V' vertices
    for(int i=0; i < m_nodes.size(); i++){
        // Looking through our 'Edges'
        for(int j=0; j < m_nodes[i]->neighbors.size(); j++){
               std::cout << m_nodes[i]->neighbors[j] << "(" << m_nodes[i]->neighbors[j]->name << ")" << ",";
               //std::cout << m_nodes[i]->neighbors[j]->name << ",";
               // Uncomment above to see the actual node name
        }
         std::cout << std::endl;
    }
}
