#include "graph_engine.h"
#include <iostream>

void GraphEngine::addSkillRelation(const std::string& skill, const std::string& job) {
    // TODO: Implement adjacency list
    std::cout << "Added relation: " << skill << " -> " << job << std::endl;
}

std::vector<std::string> GraphEngine::recommendJobs(const std::string& skill) {
    // TODO: Traverse graph
    return {"Backend Developer", "Data Engineer"};
}