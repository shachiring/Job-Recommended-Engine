#include "trie_search.h"
#include <functional>  // ✅ Required for std::function and lambdas

void TrieSearch::insert(const std::string& word) {
    TrieNode* node = root;
    for (char c : word) {
        if (!node->children[c])
            node->children[c] = new TrieNode();
        node = node->children[c];
    }
    node->isEnd = true;
}

std::vector<std::string> TrieSearch::autocomplete(const std::string& prefix) {
    std::vector<std::string> results;
    TrieNode* node = root;
    for (char c : prefix) {
        if (!node->children[c]) return results;
        node = node->children[c];
    }

    std::function<void(TrieNode*, std::string)> dfs = [&](TrieNode* n, std::string path) {
    if (n->isEnd) results.push_back(path);
    for (auto& pair : n->children) {
        char ch = pair.first;
        TrieNode* child = pair.second;
        dfs(child, path + ch);
      }
    };

    dfs(node, prefix);
    return results;
}