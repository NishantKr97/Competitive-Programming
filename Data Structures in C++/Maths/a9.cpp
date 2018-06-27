

    void Solution::arrange(vector<int> &A) {
        int i, n = A.size();
        
        for(i=0;i<n;i++)
            A[i] += (A[A[i]]%n)*n;
            
        for(i=0;i<n;i++)
            A[i] = A[i] / n;
            
        
    }

