#include<bits/stdc++.h>
using namespace std;
const int alphaBetSize = 26;
class TrieNode{
    public :
    TrieNode* children[alphaBetSize];
    bool isEndOfWord;


};

class Tries{

    public:
        TrieNode* node;
    public:

    TrieNode* getNode()
    {
        TrieNode* node = new TrieNode;

        for(int i=0;i<26;i++)
            node->children[i] = NULL;

        node->isEndOfWord = false;

        return node;
    }

    void insert(TrieNode* root, string key)
    {
            TrieNode* node = root;
            int i, n = key.length();

            for(i = 0;i < n; i++)
            {
                int index = key[i] - 'a';
                if(!node->children[index])
                    node->children[index] = getNode();

                node = node->children[index];
            }
            node->isEndOfWord = true;

    }

    int search(TrieNode* root, string key)
    {
        TrieNode* node = root;
        int i, n = key.length();

        for(i=0;i<n;i++)
        {
            int index = key[i] - 'a';
            if(!node->children[index])
                return 0;

            node = node->children[index];
        }

        if(node && node->isEndOfWord)
            return 1;
        else
            return 0;
    }
};


int main()
{
    Tries* trie = new Tries;
    string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their" };
    TrieNode* root = new TrieNode;
    int i,j,n = 8;
    for(i=0;i<8;i++)
        trie->insert(root, keys[i]);

    cout<<"'the' found - "<<trie->search(root, "the");
    cout<<"\n'bye' found - "<<trie->search(root, "bye");
    cout<<"\n'byeo' found - "<<trie->search(root, "bye0");

}
