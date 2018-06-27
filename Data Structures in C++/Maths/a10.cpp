int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
        
    return n * factorial(n-1);
}

int Solution::uniquePaths(int A, int B) {
    int arr[A][B] ;
    
    int i,j;
    for(i=0;i<B;i++)
        arr[0][i] = 1;
        
    for(i=0;i<A;i++)
        arr[i][0] = 1;
        
    for(i=1;i<A;i++)
    {
        for(j=1;j<B;j++)
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    
    return arr[A-1][B-1];
}
