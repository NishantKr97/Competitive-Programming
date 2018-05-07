#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j;
    cin>>n;
    long long a[n];
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    long long min = abs(a[1] - a[0]);
    for(i = 1;i < n-1;i++)
    {
        //cout<<abs(a[i+1] - a[i])<<" ";
        if(abs(a[i+1] - a[i]) < min)
            min = abs(a[i+1] - a[i]);
    }
    
    cout<<min;
    return 0;
}
