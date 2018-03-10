#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int i,j,n,p,q,count=0;
    cin>>p>>q;
    
    for(i=p;i<=q;i++)
    {
        if(i==1)
        {
             cout<<"1 ";
             continue;
        }
        if((i==2)||(i==3))
            continue;
        
        long long int s = i * i;
        long long int u,v,t=0;
        long long int m = s;
        while(m!=0)
        {
            m = m/10;
            t++;
            
        }
        //cout<<t<<".";
        if((t%2)==0)
        {
            u = t / 2;
            v = t / 2;
        }
        else
        {
            u = t / 2;
            v = t - u;
        }
        //cout<<u<<"."<<v<<" ";
        m = s;
        long long int l = 0,x=0,y=0;
        int a = 1;
        while(l!=v)
        {
            x = x + (m % 10)*a;
            m = m / 10;
            l++;
            a = a * 10;
        }
        l = 0;
        a = 1;
        while(l!=u)
        {
            y = y + (m % 10)*a;
            m = m / 10;
            l++;
            a = a * 10;
        }
        //cout<<x<<" "<<y<<"   ";
        
        if(((x + y) == i) && (i!=1))
        {
            cout<<i<<" ";
            count++;
        }
    }
    
    if(count==0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
