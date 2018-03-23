#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;

    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    a[0] = a[1] = 1;
    for(i=2;i<n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    cout<<a[n-1];
}
