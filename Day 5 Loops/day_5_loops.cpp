#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < 10; i++) {
        cout << n << " x " << i + 1 << " = " << (i+1) * n << endl;
    }
    return 0;
}
