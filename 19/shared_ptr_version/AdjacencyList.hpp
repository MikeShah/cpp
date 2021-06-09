#ifndef ADJACENCY_LIST_HPP
#define ADJACENCY_LIST_HPP

#include <string>
#include <vector>
#include <memory> // This has our smart pointers
//#include <list>

struct node_t{
    std::string name;
    std::vector<std::shared_ptr<node_t>> neighbors;
};

class AdjacencyList{
    public:
        AdjacencyList();
        ~AdjacencyList();

        // Add a node new
        void AddNode(std::string name);
        void AddDirectedEdge(std::string source, std::string destination);

        void print();
    private:
        std::vector<std::shared_ptr<node_t>> m_nodes;
};

#endif
