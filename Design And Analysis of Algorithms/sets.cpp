#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(10-i);
    }
    s.insert(1);
    multiset<int>::iterator it;
    for(it=s.begin(); it != s.end();it++)
    {
        cout<<*it<<endl;
    }
}
