#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
    public:
    Node(int value)
    {
        data = value;
        next=NULL;
    }

    void setNext(Node* nxt) {
        next = nxt;
    }

    void printList(Node* start) {
        Node* temp = start;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        delete temp;
    }
};

int main() {
    Node *newNode;
    Node *head = new Node(98);
    Node *second=new Node(47);
    Node *tail=new Node(12);

    head->setNext(second);
    second->setNext(tail);
    tail->setNext(NULL);

    newNode->printList(head);

    return 0;
}