#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        arr[i] = arr_item;
    }
    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
