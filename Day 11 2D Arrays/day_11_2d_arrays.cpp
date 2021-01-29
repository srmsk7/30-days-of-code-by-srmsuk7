#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maximumHourglass(vector<string> a) {
    int max = 0;
    vector<vector<int>> arr;
    for (int i = 0; i < a.size(); i++) {
        vector<int> row;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != ' ')
                row.push_back(int(a[i][j] - 48));
        }
        arr.push_back(row);
    }
    for (int i = 0; i < arr.size()-2; i++) {
        for (int j = 0; j < arr[i].size()-2; j++) {
            int sum;
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (sum > max)
                max = sum;
        }
    }
    return max;
}

int main()
{
    vector<string> a;
    string s;
    getline(cin, s);
    a.push_back(s);
    for (int i = 0; i < (s.length()+1)/2-1; i++) {
        getline(cin, s);
        a.push_back(s);
    }
    int res = maximumHourglass(a);
    cout << res << endl;
    return 0;
}
