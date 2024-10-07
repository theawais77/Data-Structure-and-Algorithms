#include <iostream>

using namespace std;

int main() {
    const int sz = 50;
    char arr[sz];

    cout << "Enter a string you want to reverse ";
    cin >> arr;

    char *ptr = arr;
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    char *start = arr;
    char *end = arr;
    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    cout << "Your reversed array is ";
    ptr = arr;
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
}