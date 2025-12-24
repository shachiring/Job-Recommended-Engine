#include "heap_ranker.h"

void HeapRanker::addJob(const std::string& title, int score) {
    jobHeap.push({title, score});
}

std::vector<std::string> HeapRanker::getTopJobs(int count) {
    std::vector<std::string> topJobs;
    while (!jobHeap.empty() && count--) {
        topJobs.push_back(jobHeap.top().title);
        jobHeap.pop();
    }
    return topJobs;
}