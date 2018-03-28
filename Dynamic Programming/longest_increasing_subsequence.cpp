#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b)
{
    int c;
    (a > b) ? c = a : c = b ;
    return c;
}

int main()
{
    int i,j,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector< pair<int, int> > s;
    cout<<"Enter the array : \n";
    for(i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pair<int, int> p = make_pair(a, 1);
        s.push_back(p);
    }


    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(s[j].first < s[i].first)
            {
                    s[i].second = maximum(s[i].second, s[j].second+1);
                   // cout<<s[i].second<<" "<<s[j].second+1<<endl;
            }
        }
    }


    for(i=0;i<n;i++)
    {
        cout<<s[i].second<<" ";
    }

}

/*int main()
{
    //declaring vector of pairs
    vector< pair <int,int> > vect;

    // initialising 1st and 2nd element of
    // pairs with array values
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );

    // Printing the vector
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }

    return 0;
}*/
