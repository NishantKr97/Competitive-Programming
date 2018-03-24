#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    vector<pair<float, pair<float, float> > > x;

    cout<<"Enter n : ";
    cin>>n;
    cout<<"ENTER THE VALUE AND WEIGHT OF THE ITEMS : \n";

    for(i=0;i<n;i++)
    {
        float a,b,c;
        cin>>a>>b;
        c = a / b;
        pair<float, float> u = make_pair(a, b);
        pair<float, pair<float, float> > v = make_pair(c, u);
        x.push_back(v);
    }

    sort(x.begin(), x.end());

    for(i=0;i<n;i++)
    {
        cout<<x[i].first<<" "<<x[i].second.first<<" "<<x[i].second.second<<endl;
    }

    int w;
    cout<<"ENTER THE MAX WEIGHT THE BAG CAN HOLD : ";
    cin>>w;
    int k = w;
    vector< int > h;
    for(i=n-1;i>=0;i--)
    {
        if(w<0)
        {
            w = k;
            float l = (float)w / (float)x[i].second.second;
            h.push_back(l);
            cout<<x[i].second.first<<" - "<<l;
            break;
        }

        h.push_back(x[i].second.second);
        k = w;

        w -= x[i].second.second;
        //cout<<w<<endl;
        if(w < 0)
        {
            i++;
            continue;
        }

        cout<<x[i].second.first<<" - 1"<<endl;
    }



}
