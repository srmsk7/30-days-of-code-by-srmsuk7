#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string::size_type sz;
    try {
        int n = stoi(s, &sz);
        cout << n << endl;
    }
    catch(exception& e) {
        cout << "Bad String" << endl;
    }
    return 0;
}
