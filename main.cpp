#include "head.h"




int main()
{
    auto graph = Graph("flights.txt");
    //display all nodes from graph
    for (auto& node : graph.graph) {
        std::cout << node.first << " " << node.second.first << " " << node.second.second << std::endl;
    }
    //Dziala git











}
