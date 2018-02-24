#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k,carry=0,prod=1,t=1;
    cin>>n;
    int a[1000] = {1};
    for(i=2;i<=n;i++)
    {
       carry = 0;
       for(j=0;j<t;j++)
       {
           prod = a[j];
           prod = (prod*i)+carry;
           a[j] = prod%10;
           carry =prod/10;
           
       }
       while(carry)
       {
          a[t] = carry%10;
          carry = carry/10;
          t++;
       }
    }
    
    
    for(i=t-1;i>=0;i--)
        cout<<a[i];
    return 0;
}
