#include <iostream>
using namespace std;
const int sz = 4;

void rowSum(int arr[sz][sz])
{
    for (int i = 0; i < sz; i++)

    {
        int rowSum = 0;
        for (int j = 0; j < sz; j++)
        {
            rowSum = rowSum + arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " is " << rowSum << endl;
    }
}
void colSum(int arr[sz][sz])
{
    for (int j = 0; j < sz; j++)
    {
        int colSum = 0;
        for (int i = 0; i < sz; i++)
        {
            colSum = colSum + arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " is " << colSum << endl;
    }
}
void transMatrix(int arr[sz][sz], int transpose[sz][sz])
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main()
{
    int arr[sz][sz] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12},
                       {13, 14, 15, 16}};

    int transpose[sz][sz];

    rowSum(arr);
    colSum(arr);

    transMatrix(arr, transpose);
    cout << "TRansposed matrix is : " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}