int Solution::cpFact(int A, int B) {
    int i,j;
    vector<int> v;
    
    for(i=1;i<sqrt(A);i++)
        if(A % i == 0)
        {
            v.push_back(i);
            v.push_back(A / i);
        }
        
    int max = INT_MIN;    
    int n = v.size();
    for(i=0;i<n;i++)
    {
        if((v[i] > max) && (__gcd(v[i], B) == 1))
            max = v[i];
    }
    
    return max;
}
