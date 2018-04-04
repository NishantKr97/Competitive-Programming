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
        return 1 + min(min(solveByRec(a, l1, b, l2-1), solveByRec(a, l1-1, b, l2)), solveByRec(a, l1-1, a, l2-1));
    }
}

int solveBy2DArray(string a, string b)
{
    int m = a.length();
    int n = b.length();
    int arr[m+1][n+1];
    int i, j;

    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i == 0)
                arr[i][j] = j;
            else if(j == 0)
                arr[i][j] = i;
            else if(a[i-1] == b[j-1])
                arr[i][j] = arr[i-1][j-1];
            else
                arr[i][j] = min(min(arr[i-1][j], arr[i][j-1]), arr[i-1][j-1])+1;
        }
    }

   for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return arr[m][n];
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

    int r2 = solveBy2DArray(a, b);
    cout<<endl<<r2;
}
