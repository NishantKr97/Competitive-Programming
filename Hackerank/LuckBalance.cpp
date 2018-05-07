#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,j,n,k;
    cin>>n>>k;
    vector< pair<int, int> > a;
    for(i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        a.push_back(make_pair(u,v));
    }
    
    sort(a.begin(), a.end());
    
    int luck = 0, p = 0;
    for(i=n-1;i>=0;i--)
    {
      if(a[i].second == 0)
      {
          luck += a[i].first;
          //cout<<luck<<endl;
          continue;
      }
      else
      {
        if(p < k)
        {
            luck += a[i].first;
            //cout<<luck<<endl;
            p++;
        }
        else
        {
            luck -= a[i].first;
        }
      }
    }
    
    cout<<luck;
    return 0;
}
