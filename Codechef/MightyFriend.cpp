    #include <bits/stdc++.h>
    using namespace std;
     
     
    int main() 
    {
    	long long int i,j,t,n,k;
    	cin>>t;
    	for(i=0;i<t;i++)
    	{
    	    cin>>n>>k;
    	    long long int a[n];
    	    for(j=0;j<n;j++)
    	    {
    	        cin>>a[j];
    	    }
     
            long long int motuSum = 0, tomuSum = 0;
            vector<int> motu, tomu;
            for(j=0;j<n;j+=2)
            {
                motu.push_back(a[j]);
            }
            
            for(j=1;j<n;j+=2)
            {
                tomu.push_back(a[j]);
            }
            
            sort(motu.begin(), motu.end());
            sort(tomu.begin(), tomu.end());
            
            long long ptrM = motu.size()-1;
            long long ptrT = 0;
            
            for(j=0;j<k;j++)
            {
                if(j < motu.size() && j < tomu.size())
                {
                    if(motu[ptrM] < tomu[ptrT])
                    {
                        break;
                    }
                    long long temp = motu[ptrM];
                    motu[ptrM] = tomu[ptrT];
                    tomu[ptrT] = temp;
                    ptrM--;
                    ptrT++;
                }
            }
            
            for(j=0;j<motu.size();j++)
            {
                motuSum += motu[j];
            }
            
            for(j=0;j<tomu.size();j++)
            {
                tomuSum += tomu[j];
            }        
            
            //cout<<motuSum<<" "<<tomuSum<<endl;
            
            if(tomuSum > motuSum)
                cout<<"YES\n";
            else
                cout<<"NO\n";
    	    
    	}
    	return 0;
    }
     