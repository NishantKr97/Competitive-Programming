    #include <bits/stdc++.h>
    using namespace std;
     
     
    int main() 
    {
    	long long int i,j,t,n;
    	cin>>t;
    	for(i=0;i<t;i++)
    	{
    	    cin>>n;
    	    long long int a[n];
    	    for(j=0;j<n;j++)
    	    {
    	        cin>>a[j];
    	        a[j] *= 2;
    	    }
    	    
    	    if(n == 1)
    	    {
    	        cout<<a[0]<<endl;
    	        continue;
    	    }
    	    
    	    long long int x = a[0] ^ a[1]; 
    	    for(j=2;j<n;j++)
    	    {
    	        x ^= a[j];
    	    }
    	    
    	    cout<<x<<endl;
    	    
    	}
    	return 0;
    }
     