#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }

};
class AcsendingOrder {
private:
    Node* head;

public:
    AcsendingOrder() {
        head = nullptr;
    }

void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr || value < head->data) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr && value > current->next->data) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout <<endl;
    }
};
int main() {
    AcsendingOrder singly;

    singly.insert(9);
    singly.insert(1);
    singly.insert(5);

singly.insert(7);
    singly.insert(11);
    singly.insert(3);

    cout << "Numbers in asc order: ";
    singly.display();

    return 0;
}