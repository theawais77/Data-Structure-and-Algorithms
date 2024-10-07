#include <iostream>

using namespace std;

int main() {
    int N, M;
    int a=0,b=0;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Enter the value of M: ";
    cin >> M;

    
   
    for (int i = 1; i <= N; i++) {
        a += i;
    }

  
    for (int i = 1; i <=  M; i++) {
        b +=2*i;
    }

    cout << "Sum of the positive integers: " << a << endl;
    cout << "Sum of the  even integers: " << b << endl;

    return 0;
}