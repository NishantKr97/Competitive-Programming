    #include <bits/stdc++.h>
    using namespace std;
     
    int findGCD(int a, int b)
    {
        if ( a==0 ) 
         return b;
        return findGCD( b%a, a );
    }
     
    int main() 
    {
    	int i,j,t,n;
    	cin>>t;
    	for(i=0;i<t;i++)
    	{
    	    cin>>n;
    	    int a[n];
    	    for(j=0;j<n;j++)
    	    {
    	        cin>>a[j];
    	    }
    	    
    	    int gcd = findGCD(a[0], a[1]);
    	    for(j=2;j<n;j++)
    	    {
    	        gcd = findGCD(gcd, a[j]);
    	    }
    	    
     
    	    if(gcd == 1)
    	        cout<<"0\n";
    	    else
    	        cout<<"-1\n";
    	}
    	return 0;
    }
     