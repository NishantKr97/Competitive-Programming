#include<bits/stdc++.h>
using namespace std;

struct MinHeapNode
{
    char data;
    int freq;

    MinHeapNode *left, *right;

    MinHeapNode(char data, int freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }

};

struct compare
{
    bool operator()(MinHeapNode *l , MinHeapNode *r)
    {
        return (l->freq > r->freq);
    }
};

void printCode(struct MinHeapNode *root, string str)
{
    if(!root)
        return;
    if(root->data != '$')
        cout<<root->data<<": "<<str<<endl;

    printCode(root->left, str + "0");
    printCode(root->right, str+ "1");
}

void HuffmanCodes(char data[], int freq[], int size)
{
    struct MinHeapNode *left, *right, *top;

    priority_queue< MinHeapNode*, vector<MinHeapNode*>, compare> minHeap;
    int i;
    for(i=0;i<size;i++)
    {
        minHeap.push( new MinHeapNode(data[i], freq[i]));
    }

    while (minHeap.size() != 1)
    {
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        top = new MinHeapNode( '$', left->freq + right->freq);
        top->left = left;
        top->right = right;

        minHeap.push(top);
    }

    printCode(minHeap.top(), "");
}

int main()
{
        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
        int freq[] = {5, 9, 12, 13, 16, 45};

        int size = sizeof(arr) / sizeof(arr[0]);

        HuffmanCodes(arr, freq, size);
}
