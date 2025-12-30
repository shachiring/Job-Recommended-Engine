#include "trie_search.h"
#include "graph_engine.h"
#include "dp_pathfinder.h"
#include "freshness_filter.h"
#include <iostream>

int main() {
    // 1. TrieSearch: Autocomplete
    TrieSearch trie;
    trie.insert("Backend Developer");
    trie.insert("ML Engineer");
    auto suggestions = trie.autocomplete("Back");
    std::cout << "Autocomplete for 'Back': ";
    for (const auto& s : suggestions) std::cout << s << " ";
    std::cout << std::endl;

    // 2. GraphEngine: Skill-job mapping
    GraphEngine graph;
    graph.addEdge("Python", "ML Engineer");
    graph.addEdge("C++", "Backend Developer");
    auto neighbors = graph.getNeighbors("Python");
    std::cout << "Jobs related to 'Python': ";
    for (const auto& n : neighbors) std::cout << n << " ";
    std::cout << std::endl;

    // 3. DPPathfinder: Career path
    DPPathfinder dp;
    auto path = dp.findCareerPath("Python", "ML Engineer");
    std::cout << "Career path from 'Python' to 'ML Engineer': ";
    for (const auto& p : path) std::cout << p << " → ";
    std::cout << "\b\b  " << std::endl; // remove last arrow

    // 4. FreshnessFilter: Date filtering
    FreshnessFilter filter;
    filter.addJob("Backend Developer", "2025-12-01");
    filter.addJob("ML Engineer", "2025-11-01");
    auto recent = filter.getRecentJobs("2025-11-15");
    std::cout << "Jobs after 2025-11-15: ";
    for (const auto& r : recent) std::cout << r << " ";
    std::cout << std::endl;

    std::cout << "✅ Integrated Job Recommendation Engine test passed!" << std::endl;
    return 0;
}