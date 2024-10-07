
#include <iostream>
using namespace std;
int main()
{
    int num = 12;
    float decimal = 11.2;
    char a = 'x';

    // pointer variable
    int *ptr1 = &num;
    float *ptr2 = &decimal;
    char *ptr3 = &a;
    cout << "Address of int: " << ptr1 << " Value: " << *ptr1 << endl;
    cout << "Address of decimal: " << ptr2 << " Value: " << *ptr2 << endl;
    cout << "Address of a: " << ptr3 << " Value: " << *ptr3 << endl;


    ptr1++;
    ptr2++;
    ptr3++;

    cout << "After increment\n";
     cout << "Address of int: " << ptr1  << endl;
    cout << "Address of decimal: " << ptr2 << endl;
    cout << "Address of a: " << ptr3  << endl;

}