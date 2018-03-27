#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,j,n,page=1,chap,k;
    cin>>n>>k;
    int count = 0;
    for(i=0;i<n;i++)
    {
        int t;
        cin>>t;
        
        int a = t/k;
        int b = t%k;
        
        int l = 1;
        for(j=0;j<a;j++)
        {
            if((page>=l)&&(page<(l+k)))
            {
                count++;
                //cout<<page<<" ";
            }
            page++;
            l = l + k;
        }
        
        if(b>0)
        {
            
                if((page>=l)&&(page<(l+b)))
                {
                    count++;
                    //cout<<page<<" ";
                }
            page++;
             
        }
       
        
    }
    cout<<count;
    return 0;
}
