#include "trie_search.h"
#include <cassert>
#include <iostream>

int main() {
    TrieSearch trie;
    trie.insert("Backend");
    trie.insert("Backend Developer");
    trie.insert("Data Engineer");

    auto results = trie.autocomplete("Back");
    assert(results.size() == 2);
    assert(results[0] == "Backend");
    assert(results[1] == "Backend Developer");

    std::cout << "✅ TrieSearch tests passed!" << std::endl;
    return 0;
}