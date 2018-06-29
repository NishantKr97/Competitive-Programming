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

int findBreakPoint(int *a, int low, int high)
{
     if(low > high)
        return -1;

    int mid = (low + high) / 2;
    if(mid == 0 || mid == high)
        return mid;

    if(a[mid] > a[mid-1] && a[mid] > a[mid+1])
        return mid;
    else if(a[mid] > a[mid-1] && a[mid] < a[mid+1])
        findBreakPoint(a, mid+1, high);
    else
        findBreakPoint(a, low, mid-1);
}

int main()
{
    int a[10] = { 3, 5, 7, 8, 9, 10, 11, 4, 2, 1};
    int k = findPeak(a, 0, 9);
    cout<<a[k]<<endl;

    int b[3] = {14, 13, 12};
    int p = findBreakPoint(b, 0, 3);
    cout<<b[p];
}
