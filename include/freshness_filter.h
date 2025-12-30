#ifndef FRESHNESS_FILTER_H
#define FRESHNESS_FILTER_H

#include <string>
#include <vector>
#include <unordered_map>

class FreshnessFilter {
public:
    void addJob(const std::string& title, const std::string& date);
    std::vector<std::string> getRecentJobs(const std::string& cutoffDate);

private:
    std::unordered_map<std::string, std::string> jobDates;
};

#endif