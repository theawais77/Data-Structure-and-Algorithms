#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int n;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;

   
    cout << "Recursive Factorial  " << factorial_recursive(n) << endl; 
    cout << "Factorial " << factorial(n) << endl;

}