// g++ -std=c++11 main.cpp -o prog
// Note: This example needs at least C++ 11 because of unordered_map
#include <iostream>
#include <unordered_map>
#include <vector>

typedef std::unordered_map<int,std::vector<int> > adjList_t;

// @file adjacency_list_unordered_map/main.cpp
void AddEdge(std::unordered_map<int,std::vector<int> >& graph,
            int src,
            int dst){

    graph[src].push_back(dst); 
}

void PrintAdjaceneyList(const std::unordered_map<int,std::vector<int> >& adj){
    for(const auto key: adj){
        // Note: An unordered_map is a key/value pair, so when we 
		//       iterate we get key/value pairs.
        //       Thus, we have to access the first element as the 'key'
        std::cout << key.first << "-->";
        for(auto value: key.second){
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

// @file adjacency_list_unordered_map/main.cpp
int main(){

	adjList_t adj;

    AddEdge(adj,1,2);
    AddEdge(adj,1,3);
    AddEdge(adj,1,4);
    AddEdge(adj,2,1);
    AddEdge(adj,2,4);

    PrintAdjaceneyList(adj);

    return 0;
}
