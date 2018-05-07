#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    int n = sticks.size();
    sort(sticks.begin(), sticks.end());
    vector<int> v;
    for(int i=n-1;i>=2;i--)
    {
        if(sticks[i-2] + sticks[i-1] > sticks[i])
        {
            
            v.push_back(sticks[i-2]);
            v.push_back(sticks[i-1]);
            v.push_back(sticks[i]);
            return v;
            //cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i];
            break;
        }
        
    }
    v.push_back(-1);
    return v;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string sticks_temp_temp;
    getline(cin, sticks_temp_temp);

    vector<string> sticks_temp = split_string(sticks_temp_temp);

    vector<int> sticks(n);

    for (int sticks_itr = 0; sticks_itr < n; sticks_itr++) {
        int sticks_item = stoi(sticks_temp[sticks_itr]);

        sticks[sticks_itr] = sticks_item;
    }

    vector<int> result = maximumPerimeterTriangle(sticks);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
