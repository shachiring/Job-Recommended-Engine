#include "freshness_filter.h"

bool FreshnessFilter::isFresh(const std::time_t& postedDate) {
    std::time_t now = std::time(nullptr);
    double daysOld = std::difftime(now, postedDate) / (60 * 60 * 24);
    return daysOld <= 30; // Only show jobs posted within last 30 days
}