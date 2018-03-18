#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
        int value;
        int ranking;
        Node* parent;

    void makeSet()
    {
        Node.parent = &x;
        Node.ranking = 0;
    }

    Node  findSet(Node x)
    {
        Node temp;
        temp = x;
        while(x.parent != &x)
        {
            x = *x.parent;
            cout<<x.value;
        }
       // temp.parent = &x;
        return x;
    }
};

int main()
{
    Node node ;
    node.value = 5;
    node.makeSet();
    cout<<node.value<<(node.parent->value)<<endl;
    Node x = node.findSet(node);
    cout<<x.value;
}
