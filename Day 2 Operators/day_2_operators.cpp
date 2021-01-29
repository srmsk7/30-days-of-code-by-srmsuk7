#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = 0.01 * meal_cost * tip_percent;
    double tax = 0.01 * meal_cost * tax_percent;
    double total_cost = meal_cost + tip + tax;
    if (total_cost - (int) total_cost < 0.5)
        cout << (int) total_cost << endl;
    else
        cout << (int) ++total_cost << endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
