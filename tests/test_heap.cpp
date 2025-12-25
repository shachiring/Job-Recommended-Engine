#include "heap_ranker.h"
#include <cassert>
#include <iostream>

int main() {
    HeapRanker heap;
    heap.addJob("Backend Developer", 85);
    heap.addJob("Data Engineer", 90);

    auto topJobs = heap.getTopJobs(2);
    assert(topJobs[0] == "Data Engineer");
    assert(topJobs[1] == "Backend Developer");

    std::cout << "✅ HeapRanker tests passed!" << std::endl;
    return 0;
}