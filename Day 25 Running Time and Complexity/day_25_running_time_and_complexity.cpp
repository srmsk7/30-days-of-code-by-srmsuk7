#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    vector<bool> result;
    long max = 0;
    while (t--) {
        long n;
        cin >> n;
        
        result.push_back(isPrime(n));
    }
    for (int i = 0; i < result.size(); i++) {
        cout << (result[i] ? "Prime" : "Not prime") << endl;
    }
    return 0;
}

/*
12345
*/
