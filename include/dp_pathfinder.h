#ifndef DP_PATHFINDER_H
#define DP_PATHFINDER_H

#include <string>
#include <vector>
#include <unordered_map>

class DPPathfinder {
public:
    std::vector<std::string> findCareerPath(const std::string& startSkill, const std::string& targetJob);
};

#endif