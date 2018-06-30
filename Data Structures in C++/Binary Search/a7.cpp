int Solution::searchInsert(vector<int> &A, int B) {
    int low = 0, high = A.size()-1;
    int mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(A[mid] == B)
            return mid;
        else if(A[mid] > B)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    //cout<<mid<<" ";
    if(A[mid] < B)
        return mid+1;
    else
        return mid;
}
