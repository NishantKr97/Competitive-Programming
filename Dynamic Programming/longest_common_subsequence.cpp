#include<bits/stdc++.h>
using namespace std;
int  val,k;
string c;
int subseq(string a, int l1, string b, int l2, int count)
{
    if(l1 == 0 && l2 == 0)
    {
         return count;
    }

    if(l1 == 0)
        return subseq(a, val, b, l2-1, count);
    if(a[l1-1] == b[l2-1])
    {
        //c.append(a, l1, 1);
        cout<<a[l1-1]<<endl;
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

 string p;
string subSeqStr(string a, int l1, string b, int l2, string c)
{
   if(l1 == 0 && l2 == 0)
    {
         return c;
    }

    if(l1 == 0)
    {
       c =  subSeqStr(a, val, b, l2-1, c);
       return c;
    }

    if(a[l1-1] == b[l2-1])
    {
         c.append(a, l1-1,1);
        //cout<<c<<endl;
         val = l1-1;
         l1--;
         l2--;
         c = subSeqStr(a, l1, b, l2, c);
    }
    else
    {
         c = subSeqStr(a, l1-1, b, l2, c);
    }

    return c;

}

void solveBy2DArray(string a, string b)
{
    int u,v,i,j;
    u = a.length();
    v = b.length();
    int s[u][v] = {0};

}


int main()
{
    string a, b;
    cout<<"Enter the String A : ";
    cin>>a;
    cout<<"Enter the String B : ";
    cin>>b;
    int count = 0;
    string p="";
    int k = subseq(a, a.length(), b, b.length(), count);
    cout<<k;
    string s = subSeqStr(a, a.length(), b, b.length(),p);
    for(int i=0;i<s.length()/2;i++)
    {
        char temp = s[s.length()-i-1];
        s[s.length()-i-1] = s[i];
        s[i] = temp;
    }
    cout<<endl<<s;

    //solveBy2DArray(a, b);

}
