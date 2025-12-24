#ifndef TRIE_SEARCH_H
#define TRIE_SEARCH_H

#include <string>
#include <vector>
#include <unordered_map>

class TrieSearch {
public:
    void insert(const std::string& word);
    std::vector<std::string> autocomplete(const std::string& prefix);
private:
    struct TrieNode {
        bool isEnd;
        std::unordered_map<char, TrieNode*> children;
        TrieNode() : isEnd(false) {}
    };
    TrieNode* root = new TrieNode();
};

#endif