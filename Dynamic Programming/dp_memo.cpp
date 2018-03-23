#include<bits/stdc++.h>
using namespace std;
int a[100];
int fib_dp(int n)
{
    if(a[n] == -1)
    {
       // cout<<a[n]<<endl;
        if(n <= 1)
            a[n] =  1;
        else
            a[n] = fib_dp(n-1) + fib_dp(n-2);

        //2cout<<a[n]<<endl;
    }
    return a[n];
}

int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    for(i=0;i<n;i++)
        a[i] = -1;
        for(i=0;i<n;i++);
            //cout<<a[i]<<endl;
    int k = fib_dp(n-1);
    cout<<k;
    return 1;
}
