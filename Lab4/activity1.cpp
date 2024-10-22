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
        cout << "Pushed item" << item << endl;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return -1;
        }
        int poppedItem = stack[top--];
        cout << "Popped Item" << poppedItem << endl;
        return poppedItem;
    }
    int size(){
        return top+1;
    }
};
int main(){
    Stack mystack;
    mystack.push(10);
    mystack.push(20);
    mystack.push(35);
    mystack.push(44);
    mystack.push(55);
    cout<<"Stack size : "<<mystack.size()<<endl;

    mystack.pop();
    mystack.pop();
    mystack.pop();
}
