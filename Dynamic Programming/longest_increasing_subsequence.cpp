#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    int c;
    (a > b) ? c = a : c = b ;
    return c;
}

int main()
{
    int i,j,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector< pair<int, int> > s;
    cout<<"Enter the array : \n";
    for(i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pair<int, int> p = make_pair(a, 1);
        s.push_back(p);
    }


    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(s[j].first < s[i].first)
            {
                    s[i].second = maximum(s[i].second, s[j].second+1);
                   // cout<<s[i].second<<" "<<s[j].second+1<<endl;
            }
        }
    }


    for(i=0;i<n;i++)
    {
        cout<<s[i].second<<" ";
    }



}

