#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,t,k;
    string a;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        string a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            sort(a[j].begin(), a[j].end());
        }
        
        int flag = 1;
        for(j=0;j<n;j++)
        {
            for(k=1;k<n;k++)
            {
                if(a[k][j] < a[k-1][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        
        if(flag == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}
