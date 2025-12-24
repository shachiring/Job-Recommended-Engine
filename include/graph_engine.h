#ifndef GRAPH_ENGINE_H
#define GRAPH_ENGINE_H

#include <vector>
#include <string>
#include <unordered_map>

class GraphEngine {
public:
    void addSkillRelation(const std::string& skill, const std::string& job);
    std::vector<std::string> recommendJobs(const std::string& skill);
};

#endif