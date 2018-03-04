#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m,i,j,count,max,value,k;
    cin>>n>>m;
    char a[m];
    int *b[n];
    
    for(i=0;i<n;i++)
    {
        cin>>a;
        b[i] = (int*)calloc(1,sizeof(int)*m);
        
        j = 0;
        for(j=0;j<m;j++)
        {
           int u = a[j] - '0';
           b[i][j] = u;
        }
        
    }
   
  
    
    max=-1;
    int c[1000000],l=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            count=0;
            for(k=0;k<m;k++)
            {
                if(b[i][k]||b[j][k])
                {
                    count++;
                }
            }
          c[l] = count;
          l++;
        }
    }
    
    sort(c,c+l);
    //for(i=0;i<l;i++)
      //  cout<<c[i]<<" ";
    //cout<<endl;
    count = 1;
    for(i=l-1;i>0;i--)
    {
        if(c[i]==c[i-1])
        {
            count++;
        }
        else
            break;
    }
    
    cout<<c[l-1]<<endl<<count;
    return 0;
}
