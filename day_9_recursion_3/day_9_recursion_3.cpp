#include <iostream>
using namespace std;

int factorial(int n) {
    int res = 1;
    if (n <= 1)
        return res;
    else
        return n * factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    int res = factorial(n);
    cout << res << endl;
    return 0;
}
