#ifndef GRAPH_ENGINE_H
#define GRAPH_ENGINE_H

#include <string>
#include <unordered_map>
#include <vector>

class GraphEngine {
public:
    void addEdge(const std::string& from, const std::string& to);
    std::vector<std::string> getNeighbors(const std::string& node);

private:
    std::unordered_map<std::string, std::vector<std::string>> adjList;
};

#endif