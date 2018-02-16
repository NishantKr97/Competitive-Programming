#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a,b,i,j,arr1[100],arr2[100],count=0,key=0;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<b;i++)
    {
        cin>>arr2[i];
    }
    for(i=arr1[a-1];i<=arr2[0];i++)
    {
        for(j=0;j<a;j++)
        {
            if(i%arr1[j]==0)
            {
                key = 1;
                continue;
            }   
            else
            {
                key = 0;
                break;
            }
        }
        if(key == 1)
        {
          for(j=0;j<b;j++)
          {
            if(arr2[j]%i==0)
            {
                key = 1;
                continue;
            }
            else 
            {
               key = 0;
               break;
            }     
          }
         if(key==1)
           count++;
        }
       
    }
    
    cout<<count;
    return 0;
}
