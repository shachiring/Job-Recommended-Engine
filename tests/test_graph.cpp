#include "graph_engine.h"
#include <cassert>
#include <iostream>

int main() {
    GraphEngine graph;
    graph.addEdge("C++", "Backend Developer");
    graph.addEdge("Python", "ML Engineer");

    auto neighbors = graph.getNeighbors("Python");
    assert(neighbors.size() == 1);
    assert(neighbors[0] == "ML Engineer");

    std::cout << "✅ GraphEngine tests passed!" << std::endl;
    return 0;
}