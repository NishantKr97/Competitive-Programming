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

int findBreakPoint(int *arr, int low, int high)
{
     if (high < low) return -1;
  if (high == low) return low;

   int mid = (low + high)/2; /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1])
    return mid;

   if (mid > low && arr[mid] < arr[mid - 1])
    return (mid-1);

   if (arr[low] >= arr[mid])
    return findBreakPoint(arr, low, mid-1);

   return findBreakPoint(arr, mid + 1, high);
}

int main()
{
    int a[10] = { 3, 5, 7, 8, 9, 10, 11, 4, 2, 1};
    int k = findPeak(a, 0, 9);
    cout<<a[k]<<endl;

    int b[122] = {180, 181, 182, 183, 184, 187, 188, 189, 191, 192, 193, 194, 195, 196, 201, 202, 203, 204, 3, 4, 5, 6, 7, 8, 9, 10, 14, 16, 17, 18, 19, 23, 26, 27, 28, 29, 32, 33, 36, 37, 38, 39, 41, 42, 43, 45, 48, 51, 52, 53, 54, 56, 62, 63, 64, 67, 69, 72, 73, 75, 77, 78, 79, 83, 85, 87, 90, 91, 92, 93, 96, 98, 99, 101, 102, 104, 105, 106, 107, 108, 109, 111, 113, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127, 129, 130, 135, 137, 138, 139, 143, 144, 145, 147, 149, 152, 155, 156, 160, 162, 163, 164, 166, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177};
    int p = findBreakPoint(b, 0, 121);
    cout<<b[p];
}
