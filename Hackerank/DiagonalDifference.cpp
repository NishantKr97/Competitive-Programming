#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}