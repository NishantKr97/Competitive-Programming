int Solution::searchMatrix(vector<vector<int> > &v, int B) {

    // vector<int> v;
    int i = 0, n = v.size()-1, j=v[0].size()-1;
    while(i <= n && j >= 0)
    {
        if(v[i][j] == B)
            return 1;
        if(B > v[i][j])
            i++;
        else
            j--;
    }
    
    return 0;
}
