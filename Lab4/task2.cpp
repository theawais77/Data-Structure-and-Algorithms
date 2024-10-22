#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};


class Stack
{
private:
    Node *top; 
    int size;   

public:
    
    Stack() : top(nullptr), size(0) {}

 
    int pop()
    {
        if (top == nullptr) 
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        int value = top->data;
        Node *temp = top; 
        top = top->next;   
        delete temp;       
        size--;        
        return value;
    }


    void push(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;  
        top = newNode;        
        size++;              
    }

   
    int getSize()
    {
        return size;
    }

 
    int calculateSum()
    {
        int sum = 0;
        Node *temp = top;
        while (temp != nullptr)  
        {
            sum += temp->data; 
            temp = temp->next;
        }
        return sum;
    }
};

int main()
{
    Stack evenStack; 
    Stack oddStack;   
    int choice, value;

 
    while (true)
    {
        cout << "\n1. Push into even stack" << endl;
        cout << "2. Push into odd stack" << endl;
        cout << "3. Pop from even stack" << endl;
        cout << "4. Pop from odd stack" << endl;
        cout << "5. display results" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter even value: ";
            cin >> value;
            if (value % 2 == 0)  
            {
                evenStack.push(value);
            }
            else
            {
                cout << "Value is not even." << endl;
            }
            break;

        case 2:
            cout << "Enter odd value: ";
            cin >> value;
            if (value % 2 != 0)  
            {
                oddStack.push(value);
            }
            else
            {
                cout << "Value is not odd." << endl;
            }
            break;

        case 3:
            evenStack.pop();  
            break;

        case 4:
            oddStack.pop();  
            break;

        case 5:
          
            cout << "\nTotal odd values pushed: " << oddStack.getSize() << endl;
            cout << "Sum of odd values: " << oddStack.calculateSum() << endl;

            cout << "Total even values pushed: " << evenStack.getSize() << endl;
            cout << "Sum of even values: " << evenStack.calculateSum() << endl;

            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
