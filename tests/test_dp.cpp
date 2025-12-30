#include "dp_pathfinder.h"
#include <cassert>
#include <iostream>

int main() {
    DPPathfinder dp;
    auto path = dp.findCareerPath("Python", "ML Engineer");

    assert(!path.empty());
    assert(path.front() == "Python");
    assert(path.back() == "ML Engineer");

    std::cout << "✅ DPPathfinder tests passed!" << std::endl;
    return 0;
}