#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare second integer, double, and String variables.
    int i, i0 = 4;
    double d, d0 = 4.0;
    string s, s0 = "HackerRank ";
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> i;
    cin >> d;
    cin.ignore();
    getline(cin, s);
    // Print the sum of both integer variables on a new line.
    cout << i + i0 << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + d0);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s0 + s << endl;
    return 0;
}
