#include<bits/stdc++.h>
using namespace std;

int  solveByRec(string a, int l1, string b, int l2)
{
    if(l1 == 0)
        return l2;
    if(l2 == 0)
        return l1;

    if(a[l1-1] == b[l2-1])
    {
        return solveByRec(a, l1-1, b, l2-1);
    }
    else
    {
        return 1 + min(min(solveByRec(a, l1, b, l2-1), solveByRec(a, l1-1, b, l2))+1, solveByRec(a, l1-1, a, l2-1));
    }

}

int main()
{
    string a,b;
    cout<<"Enter string A : ";
    cin>>a;
    cout<<"Enter string B : ";
    cin>>b;
    int r1 = solveByRec(a, a.length(), b, b.length());
    cout<<r1<<endl;
}
