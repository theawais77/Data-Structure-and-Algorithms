#include <iostream>
using namespace std;

void reverseArr(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;
    while (start < end)
    {

        int swap = arr[start];
        arr[start] = arr[end];
        arr[end] = swap;
        start++;
        end--;
    }
}
double Average(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (double)sum / size;
}

void findMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum value is : " << max << endl;
}

void findMin(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum value is : " << min << endl;
}
int main()
{
    int sz = 10;
    int arr[] = {7, 5, 6, 12, 35, 42, 18, 23, 50, 4};
    reverseArr(arr, sz);
    cout << "-The reversed array : ";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    findMin(arr, sz);
    findMax(arr,sz);

    cout << "-Average value is :" << Average(arr, sz) << endl;
}
