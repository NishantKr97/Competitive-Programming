int Solution::sqrt(int A) {
    long long int i,j;
    long long int low = 1, high = A;
    if(A == 0)
        return 0;
    while(low <= high)
    {
        long long int mid = low + (high-low) / 2;
        
        if((mid*mid) <= A && ((mid+1)*(mid+1) > A))
            return mid;
        else if((mid*mid) < A)
            low = mid+1;
        else
            high = mid-1;
    }
}
