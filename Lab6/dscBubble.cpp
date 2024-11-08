#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int temp;
    int A[10];
    cout << "Enter 10 values: ";
    for(int a = 0; a < n; a++)
        cin >> A[a];

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] < A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "\n=== Sorted Values in Descending order ===\n";
    for(int x = 0; x < n; x++)
        cout << "\t" << A[x];
    return 0;
}
