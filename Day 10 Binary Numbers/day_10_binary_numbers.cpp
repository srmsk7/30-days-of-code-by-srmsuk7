#include <iostream>
using namespace std;

int binaryNumbers(int n) {
    int count = 0, max = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        else
            count = 0;
        if (count > max)
            max = count;
        n /= 2;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int res = binaryNumbers(n);
    cout << res << endl;
    return 0;
}
