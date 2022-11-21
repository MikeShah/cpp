#include <iostream>
#include <unordered_map>
#include <vector>

void AddEdge(std::unordered_map<int,std::vector<int> >& graph,
            int src,
            int dst){

    graph[src].push_back(dst); 
}

void PrintAdjaceneyList(const std::unordered_map<int,std::vector<int> >& adj){
    for(const auto key: adj){
        // Note: An unordered_map is a key/value pair, so when we iterate we get key/value pairs
        //       Thus, we have to access the first element as the 'key'
        std::cout << key.first << "-->";
        for(auto value: key.second){
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
                        // key // value
    std::unordered_map<int,    std::vector<int> > adj;

    AddEdge(adj,1,2);
    AddEdge(adj,1,3);
    AddEdge(adj,1,4);
    AddEdge(adj,2,1);
    AddEdge(adj,2,4);

    PrintAdjaceneyList(adj);

    return 0;
}
