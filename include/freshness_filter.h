#ifndef FRESHNESS_FILTER_H
#define FRESHNESS_FILTER_H

#include <string>
#include <vector>
#include <ctime>

class FreshnessFilter {
public:
    bool isFresh(const std::time_t& postedDate);
};

#endif