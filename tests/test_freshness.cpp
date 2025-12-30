#include "freshness_filter.h"
#include <cassert>
#include <iostream>

int main() {
    FreshnessFilter filter;
    filter.addJob("Backend Developer", "2025-12-01");
    filter.addJob("ML Engineer", "2025-11-01");

    auto recent = filter.getRecentJobs("2025-11-15");
    assert(recent.size() == 1);
    assert(recent[0] == "Backend Developer");

    std::cout << "✅ FreshnessFilter tests passed!" << std::endl;
    return 0;
}