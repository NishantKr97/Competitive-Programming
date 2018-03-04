#include <bits/stdc++.h>
using namespace std;

void reverse(string a, int index, int length)
{

    if(index == length)
    return;

    reverse(a,index+1,length);
    cout<<a[index];
}

char reverseStack(string a, int index, int length)
{
    if(index == length - 1)
        return  a[index];
    cout<<a[index];
    return reverseStack(a, index+1, length);

}

int main()
{
    string a;
    cin>>a;
    //reverse(a, a.length());
    cout<<reverse(a, 0, a.length());
}
