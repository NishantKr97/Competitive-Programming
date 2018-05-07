#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long mult(long long a,long long b)
{
    long long res = 0;  

    a %= mod;
 
    while (b)
    {

        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
 
        b >>= 1;  
    }
 
    return res;
}

int main() 
{
	long long int i,j,t,m,n,k;
	cin>>t;

	
	long long int fib[100001];
	fib[0] = 0;
	fib[1] = 1;
	for(i=2;i<100001;i++)
	{
	    fib[i] = (fib[i-1]%mod + fib[i-2]%mod)%mod;
	}
	
	
	for(i=0;i<t;i++)
	{
	    cin>>m>>n;
	    long long int a[m];
	    long long int b[m];
	    
	    long long sum1 = 0, sum2 = 0;
	    
	    for(j=0;j<m;j++)
	    {
	        cin>>a[j];
	        sum1 = ((sum1%mod)+(a[j] % mod))%mod;
	    }
	    sum1 = sum1 % mod;
	    
	    for(j=0;j<m;j++)
	    {
	        cin>>b[j];
	        sum2 = ((sum2%mod)+(b[j] % mod))%mod;
	    }
	    
	    sum2 = sum2 % mod;
	   // cout<<sum1<<sum2;
	   
	    if(n == 1)
	    {
	        cout<<m*sum1<<endl;
	        continue;
	    }
	    else if(n == 2)
	    {
            cout<<m*sum2<<endl;
	        continue;
	    }
	    
	    
	   // long long int res = ((fib[n-2] % mod) * (sum1 % mod)) % mod;
	   // res += (((fib[n-1] % mod) * (sum2 % mod)) % mod);
	   // res  = ((m % mod) * (res % mod)) % mod;
	   
	   long long res = mult(m,(mult(fib[n-2],sum1))+(mult(fib[n-1],sum2)));
	   
	    cout<<res<<endl;
	    
	    
	}
	return 0;
}
