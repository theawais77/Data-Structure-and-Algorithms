#include <iostream>
using namespace std;
int main()
{

    const int size = 10;

    int arr[size] = {0, 15, 2, 45, 4, 6, 4, 9, 10,11};
    int temp, pass, j;
    for (pass = 0; pass < size; pass++)
    {
        for (j = 0; j < size - pass; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
