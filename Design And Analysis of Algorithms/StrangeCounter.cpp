#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int n,i=1,j=1,k=1,c,l=0;
    cin>>n;
    
    while(j==1)
    {
        i = i + (pow(2,l) * 3);
        
        if(n < i)
        {
            j = 0;
            i = i - (pow(2,l) * 3);
            c = i + 2;
            c = c - (n - i);
        }
        k++;
        l++;
    }
    
    cout<<c;
    return 0;
}
