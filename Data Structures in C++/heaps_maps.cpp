#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // FIRST MIN_HEAP
    map<int, int> min_heap;
    min_heap.insert(make_pair(3, 0));
    min_heap.insert(make_pair(6, 1));
    min_heap.insert(make_pair(5, 2));
    min_heap.insert(make_pair(2, 3));
    min_heap.insert(make_pair(1, 4));
    min_heap.insert(make_pair(8, 5));
    min_heap.insert(make_pair(4, 6));
    min_heap.insert(make_pair(7, 7));

    map<int, int>::iterator it;
    cout<<"Min Heap 1 :\n";
    for(it=min_heap.begin();it!=min_heap.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // SECOND MIN_HEAP
    map<int , int> min_heap2(min_heap.begin(), min_heap.end());
    cout<<"Min Heap 2 :\n";
    for(it=min_heap2.begin();it!=min_heap2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // ERASE IN MIN_HEAPS
    min_heap2.erase(min_heap2.begin());
    cout<<"Min Heap 2 now becomes :\n";
    for(it=min_heap2.begin();it!=min_heap2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // ERASE IN MIN_HEAPS
    min_heap2.erase(5);
    cout<<"Min Heap 2 now becomes :\n";
    for(it=min_heap2.begin();it!=min_heap2.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
