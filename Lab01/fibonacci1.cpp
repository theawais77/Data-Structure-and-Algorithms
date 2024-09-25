#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number for which you want to print Fibonacci\n";
    cin >> n;
    int t1 = 0, t2 = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << sum << " ";
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
}