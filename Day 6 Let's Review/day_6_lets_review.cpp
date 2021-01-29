#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<string> res(t);
    for (int i = 0; i < t; i++) {
        string s, s_front = "", s_back = "";
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (j%2 == 0)
                s_front += s[j];
            if (j%2 != 0)
                s_back += s[j];
        }   
        res[i] = s_front + " " + s_back;
    }
    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    return 0;
}
