int Solution::isPalindrome(int A) {
    string a = to_string(A);
    int n = a.length();
    for(int i=0;i<n;i++)
    {
        if(a[i] != a[n-i-1])
            return 0;
    }
    
    return 1;
}
