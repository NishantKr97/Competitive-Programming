#include<bits/stdc++.h>
using namespace std;
int  val,k;
int subseq(string a, int l1, string b, int l2, int count)
{
    if(l1 == 0 && l2 == 0)
    {
        cout<<"\n\n"<<count<<endl;
         return count;
    }

    if(l1 == 0)
        return subseq(a, val, b, l2-1, count);
    if(a[l1-1] == b[l2-1])
    {
         cout<<a[l1-1]<<" "<<count<<endl;
         count++;
         val = l1-1;
         l1--;
         l2--;
        k = subseq(a, l1, b, l2, count);
    }
    else
    {
        k = subseq(a, l1-1, b, l2, count);
    }
    return k;

}

int main()
{
    string a, b;
    cout<<"Enter the String A : ";
    cin>>a;
    cout<<"Enter the String B : ";
    cin>>b;
    int count = 0;
    int k = subseq(a, a.length(), b, b.length(), count);
    cout<<k;

}
