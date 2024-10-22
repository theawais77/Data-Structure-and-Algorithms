#include <iostream>
using namespace std;

const int max_size = 100;

class Stack
{
private:
    int stack[max_size];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int item)
    {
        if (top == max_size - 1)
        {
            cout << "Stack Overflow ";
            return;
        }
        stack[++top] = item;
        cout << "Pushed item " << item << endl;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return -1;
        }
        int poppedItem = stack[top--];
        cout << "Popped Item " << poppedItem << endl;
        return poppedItem;
    }
    int size(){
        return top+1;
    }
};

int main(){
    Stack evenStack;
    Stack oddStack;

    int choice;
    int value;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Push into stack" << endl;
        cout << "2. Pop value from even stack" << endl;
        cout << "3. Pop value from odd stack" << endl;
        cout << "4. display results" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                if (value % 2 == 0) {
                    evenStack.push(value);
                } else {
                    oddStack.push(value);
                }
                break;
            case 2:
                evenStack.pop();
                break;
            case 3:
                oddStack.pop();
                break;
            case 4:
                cout << "Even stack size: " << evenStack.size() << endl;
                cout << "Odd stack size: " << oddStack.size() << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}