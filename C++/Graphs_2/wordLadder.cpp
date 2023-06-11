#include <bits/stdc++.h>
using namespace std;

int shortestChainLen(string beginWord, string endWord, set<string>& wordList){

	if(beginWord == endWord)
		return 0;

	if (wordList.find(endWord) == wordList.end())
		return 0;

	// To store the current chain length
	// and the length of the words
	int level = 0, wordlength = beginWord.size();

	// Push the beginWording word into the queue
	queue<string> q;
	q.push(beginWord);

	// While the queue is non-empty
	while (!q.empty()) {

		// Increment the chain length
		++level;

		// Current size of the queue
		int sizeofq = q.size();

		// Since the queue is being updated while
		// it is being traversed so only the
		// elements which were already present
		// in the queue before the beginWord of this
		// loop will be traversed for now
		for (int i = 0; i < sizeofq; ++i) {

			// Remove the first word from the queue
			string word = q.front();
			q.pop();

			// For every character of the word
			for (int pos = 0; pos < wordlength; ++pos) {

				// Retain the original character
				// at the current position
				char ch = word[pos];

				// Replace the current character with
				// every possible lowercase alphabet
				for (char c = 'a'; c <= 'z'; ++c) {
					word[pos] = c;

					// If the new word is equal
					// to the endWord word
					if (word == endWord)
						return level + 1;

					// Remove the word from the set
					// if it is found in it
					if (wordList.find(word) == wordList.end())
						continue;
					wordList.erase(word);

					// And push the newly generated word
					// which will be a part of the chain
					q.push(word);
				}

				// Restore the original character
				// at the current position
				word[pos] = ch;
			}
		}
	}
	return 0;
}

// wordListriver program
int main(){

	// make dictionary
	set<string> wordList;
	wordList.insert("poon");
	wordList.insert("plee");
	wordList.insert("same");
	wordList.insert("poie");
	wordList.insert("plie");
	wordList.insert("poin");
	wordList.insert("plea");
	string beginWord = "toon";
	string endWord = "plea";
	cout << "Length of shortest chain is: "<< shortestChainLen(beginWord, endWord, wordList);

	
	return 0;
}
