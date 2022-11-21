#include <iostream>
#include <vector>
// @file AdjacencyMatrixUndirected/main.cpp
struct AdjacencyMatrixUndirected{

    // Constructor for the AdjacencyMatrixUndirected
    AdjacencyMatrixUndirected(size_t nodes){
        // Resize the graph
        // The 'resize' function will create several empty
        // std::vector<int> for us.
        m_graph.resize(nodes);

        // The graph will zero-initialize memory for us when
        // resizing.
        for(size_t i=0; i < nodes; i++){
            m_graph[i].resize(nodes);
        }
    }
    
    // Note: For an adjacency matrix that is 'undirected'
    //       we add edges in both directions
    // We also have a 'default' parameter here for the edge
    // weight unless the user specifies
    void AddEdge(int src, int dst, int weight=1){
        m_graph[src][dst]= weight;
        m_graph[dst][src]= weight;
    }

    // Print out the graph
    // NOTE: For this demo, graphs work nicely if they are
    //       less than '10' nodes :)
    void PrintGraph(){

        // Print the header
        std::cout << "   ";
        for(size_t header= 0; header < m_graph.size(); ++header){
            std::cout << header << ' ';
        }
        std::cout << std::endl << "   "; 
        for(size_t header= 0; header < m_graph.size()*2; ++header){
            std::cout << '_';
        }
        std::cout << std::endl;

        for(size_t i=0; i < m_graph.size(); i++){
            int length=m_graph.size();
            std::cout << i << "| ";
            for(size_t j=0; j < length; j++){
                std::cout << m_graph[i][j] << ' ';
            }
            std::cout << '\n';
        } 
    }

    private:
    // Vector of vectors to represent a resizable 2D array.
    std::vector<std::vector<int> > m_graph; 
 

};


int main(){

    AdjacencyMatrixUndirected matrix(10);
    // Default weight is '1' if we do not specify
    matrix.AddEdge(1,2);
    // Observer that we have a weight of '7' here.
    matrix.AddEdge(0,4,7);
    // Print the graph
    matrix.PrintGraph();

    return 0;
}
