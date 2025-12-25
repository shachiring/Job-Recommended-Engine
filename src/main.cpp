#include <iostream>
#include "graph_engine.h"
#include "trie_search.h"
#include "heap_ranker.h"
#include "dp_pathfinder.h"
#include "freshness_filter.h"

int main() {
    std::cout << "🚀 Job Recommendation Engine Started!" << std::endl;

    GraphEngine graph;
    TrieSearch trie;
    HeapRanker heap;
    DPPathfinder dp;
    FreshnessFilter filter;

    
    trie.insert("Backend Developer");
    trie.insert("Data Engineer");
    trie.insert("ML Engineer");

    
    heap.addJob("Backend Developer", 85);
    heap.addJob("Data Engineer", 90);
    heap.addJob("ML Engineer", 95);

    
    auto topJobs = heap.getTopJobs(3);
    std::cout << "Recommended Jobs:" << std::endl;
    for (auto& job : topJobs) {
        std::cout << "- " << job << std::endl;
    }

    
    auto path = dp.findCareerPath("Python", "ML Engineer");
    std::cout << "\nCareer Path to ML Engineer:" << std::endl;
    for (auto& step : path) {
        std::cout << step << " -> ";
    }
    std::cout << "Done" << std::endl;

    return 0;
}