#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
        freopen("tourist.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    	#endif

    ll t;
    cin>>t;
    for(ll g=1;g<=t;g++){
        ll n,k,v;
        cin>>n>>k>>v;
        ll i;
        vector<string> st;
        for(i=0;i<n;i++) {string s;cin>>s;st.push_back(s);}
        i = ((v-1)*k)%n;
        ll j,x,y;
        if(i+k>n) {x=i;y=n-1;j=k-(n-i)-1;i=0;}
        else {j=i+k-1;x=0;y=-1;}
        cout<<"Case #"<<g<<":";
        for(int w=i;w<=j;w++) cout<<" "<<st[w];
        for(int w=x;w<=y;w++) cout<<" "<<st[w];
        cout<<"\n";
    }
	return 0;
}
