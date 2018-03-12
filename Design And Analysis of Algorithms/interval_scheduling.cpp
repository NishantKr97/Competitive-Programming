#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the no. of pairs : ";
	cin>>n;
	vector< pair<int, int> > v, r,k;
	cout<<"Enter the pairs : \n";
	for(i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	} 

	for(i=0;i<n;i++)
	{
		r.push_back(make_pair(v[i].second, v[i].first));
	}

	sort(r.begin(), r.end());

	for(i=0;i<n;i++)
	{
		k.push_back(make_pair(r[i].second, r[i].first));
	}


	// for(i=0;i<n;i++)
	// {
	// 	cout<<k[i].first<<" "<<k[i].second<<endl;
	// }

	int t=0;
	for(i=0;i<n;i++)
	{
		if(t < k[i].first)
		{
			cout<<"["<<k[i].first<<", "<<k[i].second<<"]\n";
			t = k[i].second;
		}
	}



}