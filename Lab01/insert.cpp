#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {1, 4, 32, 5};

    int val = 4;
    int pos = 3;
    for (int i = 4; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}