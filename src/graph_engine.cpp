#include "graph_engine.h"

void GraphEngine::addEdge(const std::string& from, const std::string& to) {
    adjList[from].push_back(to);
}

std::vector<std::string> GraphEngine::getNeighbors(const std::string& node) {
    return adjList[node];
}