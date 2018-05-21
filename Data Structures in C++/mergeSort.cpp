#include<bits/stdc++.h>
using namespace std;

void mergeArr(vector<int>& A, int low, int mid, int high)
{
    vector<int> r, l;
    int i,j;

    int c1 = mid - low + 1;
    int c2 = high - mid;

    for(i=0;i<c1;i++)
        l.push_back(A[low+i]);

    for(i=0;i<c2;i++)
        r.push_back(A[mid+1+i]);


    int c = low, la = low, ra = mid+1;
    i = 0;
    j = 0;
    int k = low;
    while(i<c1 && j<c2)
    {
            if(l[i]<=r[j])
            {
                A[k] = l[i];
                i++;
            }else{
                A[k] = r[j];
                j++;
            }
            k++;
    }

    while(i<c1)
    {
        A[k] = l[i];
        k++;
        i++;
    }
    while(j<c2)
    {
        A[k] = r[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int>& a, int low, int high)
{
    if(low < high)
    {
        int mid = (low )+ (high-low) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        mergeArr(a, low, mid, high);
    }

}

int main()
{
    int i,j,n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> a,b;
    cout<<"Enter the Array : ";
    for(i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }

    mergeSort(a, 0, n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
