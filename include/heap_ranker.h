#ifndef HEAP_RANKER_H
#define HEAP_RANKER_H

#include <string>
#include <vector>
#include <queue>

struct Job {
    std::string title;
    int relevanceScore;
    bool operator<(const Job& other) const {
        return relevanceScore < other.relevanceScore;
    }
};

class HeapRanker {
public:
    void addJob(const std::string& title, int score);
    std::vector<std::string> getTopJobs(int count);
private:
    std::priority_queue<Job> jobHeap;
};

#endif