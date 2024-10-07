#include <iostream>
using namespace std;
int main()
{
    char name[] = "Hmaid";
    char *p;
    p = name;
    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    
    return 0;
}