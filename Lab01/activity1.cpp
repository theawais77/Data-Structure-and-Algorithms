#include <iostream>
using namespace std;
int main()
{
    int num[5] = {7, 5, 6, 12, 35};
    cout << "The numbers are: ";
    for (const int &n : num)
    {
        cout << n << " ";
    }
    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}