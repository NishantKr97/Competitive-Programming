string Solution::convertToTitle(int A) {
    int n = A;
    string s = "";
    while(n!=0)
    {
        int k = n % 26;
        //cout<<k<<" "<<('A' - 1 + k)<<" ";
        if(k == 0)
        {
            s += 'Z';
            n = n - 26;
        }
        else
            s += ('A' - 1 + k);
        n = n / 26;
    }
    
    reverse(s.begin(), s.end());
    
    return s;
}
