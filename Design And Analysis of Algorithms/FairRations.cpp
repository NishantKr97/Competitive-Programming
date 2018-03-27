#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,odd=0,even=0,flag = 0,f;
    cin>>n;
    int a[n],o[n],e[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
            odd++;
        else
            even++;
    }
    int count=0;
    if((odd==0))
       {
           cout<<"0";
           return 0;
       }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)!=0)
        {
            
            if((i==n-1))
                {
                    flag = 0;
                    cout<<"NO";
                break;
                }
            for(j=i+1;j<n;j++)
            {
                
                if((a[j]%2)!=0)
                {
                    flag=1;
                   
                    count = count + (j - i) * 2;
                    break;
                }
               if((j==n-1))
                {
                    flag = 0;
                    cout<<"NO";
                   break;
                }
                    
            }
            i=j;
        }
       
        
    }
    if(flag==1)
      cout<<count;
    return 0;
}
