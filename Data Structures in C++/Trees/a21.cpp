class TrieNode{
    public:
        TrieNode* children[26];
        bool isEndOfWord;
        int freq[26];
};

TrieNode* getNode()
{
    TrieNode* node = new TrieNode;
    for(int i=0;i<26;i++)
    {
        node->children[i] = NULL;
        node->freq[i] = 0;
    }
    
    return node;
}

void insert(TrieNode* root, string key)
{
    TrieNode* node = root;
    int i, n = key.length();
    
    for(i=0;i<n;i++)
    {
        int index = key[i]-'a';
        
        //if(node->children[index])    
            node->freq[index] += 1;
        if(!node->children[index])
            node->children[index] = getNode();
        
        
        node = node->children[index];
    }
    
    node->isEndOfWord = true;
}

vector<string> search(TrieNode* root, vector<string> &A)
{
    vector<string> v;
    int i, j, n = A.size();
    
    for(i=0;i<n;i++)
    {
        string s = ""; 
        int l = A[i].length();
        TrieNode* node = root;
        for(j=0;j<l;j++)
        {
            int index = A[i][j] - 'a';
            char o = 'a' + index;
            s += o;
            //cout<<node->freq[index]<<" ";
            if(node->freq[index] == 1)
                break;
            
                
            node = node->children[index];
                
        }
        // cout<<s<<" ";
        v.push_back(s);
    }
    
    
    //free(root);
    return v;
    
}





vector<string> Solution::prefix(vector<string> &A) {
    int i,j,n = A.size();
    TrieNode* root = new TrieNode;
    for(i=0;i<n;i++)
        insert(root, A[i]);
        
    return search(root, A);
}
