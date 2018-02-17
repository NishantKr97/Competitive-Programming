#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a,b,c,p,q,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        p = abs(c-a);
        q = abs(c-b);
        if(p<q)
            cout<<"Cat A\n";
        if(q<p)
            cout<<"Cat B\n";
        if(p==q)
            cout<<"Mouse C\n";
        
    }
    return 0;
}
