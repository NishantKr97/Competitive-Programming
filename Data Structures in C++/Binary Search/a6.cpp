vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int i,j, n = A.size()-1;
    
    int low = 0, high = n;
    int k = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(A[mid] == B && (mid == 0 || A[mid] != A[mid-1]))
        {
            k = mid;
            //cout<<k<<" ";
            break;
        }
        else if(A[mid] < B)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    low = 0;
    high = n;
    int c = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(A[mid] == B && (mid == n || A[mid] != A[mid+1]))
        {
            c = mid;
            //cout<<k<<" ";
            break;
        }
        else if(A[mid] > B)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    //cout<<k<<" ";
    vector<int> v;
    v.push_back(k);
    v.push_back(c);
    return v;
}
