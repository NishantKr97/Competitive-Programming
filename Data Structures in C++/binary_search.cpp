#include<bits/stdc++.h>
using namespace std;

int findPeak(int *a, int low, int high)
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;
    if(mid == 0 || mid == high)
        return mid;

    if(a[mid] > a[mid-1] && a[mid] > a[mid+1])
        return mid;
    else if(a[mid] > a[mid-1] && a[mid] < a[mid+1])
        findPeak(a, mid+1, high);
    else
        findPeak(a, low, mid-1);
}

int main()
{
    int a[5] = { 1, 2, 3, 6, 8};
    int k = findPeak(a, 0, 4);
    cout<<a[k];
}
