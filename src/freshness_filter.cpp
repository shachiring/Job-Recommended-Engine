#include "freshness_filter.h"

void FreshnessFilter::addJob(const std::string& title, const std::string& date) {
    jobDates[title] = date;
}

std::vector<std::string> FreshnessFilter::getRecentJobs(const std::string& cutoffDate) {
    std::vector<std::string> recent;
    for (const auto& pair : jobDates) {
        const std::string& title = pair.first;
        const std::string& date = pair.second;
        if (date >= cutoffDate) {
            recent.push_back(title);
        }
    }
    return recent;
}