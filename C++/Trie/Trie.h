#include <iostream>
#include <string>
#include "TrieNode.h"
using namespace std;

class Trie{
    TrieNode * root;
public:
    Trie() {
        root = new TrieNode('\0'); // null character
    }

    void insertWord(TrieNode* root, string word) {
        // Base Case
        if(word.size() == 0) {
            root->isTerminal = true;
            return;
        }
        // small calculation
        int index = word[0] - 'a';
        TrieNode * child;
        if(root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }
        // recursive call
        insertWord(child, word.substr(1));
    }

    // For User
    void insertWord(string word) {
        insertWord(root, word);
    }

    void search(string word) {
        // implement search function on your own
    }

    void removeWord(TrieNode* root, string word) {
        // Base case
        if(word.size() == 0) {
            root->isTerminal = false;
            return;
        }

        // small calculation
        TrieNode* child;
        int index = word[0] - 'a';
        if(root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return;
        }
        // recursive call
        removeWord(child, word.substr(1));

        // remove childNode if it is useless
        if(child->isTerminal == false) {
            for(int i = 0; i < 26; i++) {
                if(child->children[i] != NULL) {
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }

};