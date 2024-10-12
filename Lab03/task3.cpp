#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;

    Node() {
        this->data = "";
        this->next = nullptr;
        this->prev = nullptr;
    }

    void addNode(Node** head, string newData) {
        Node* newNode = new Node();
        newNode->data = newData;

        if (*head == nullptr) {
            
            newNode->next = newNode;
            newNode->prev = newNode;
            *head = newNode;
        } else {
            
            Node* last = (*head)->prev;

           
            newNode->next = *head;
            newNode->prev = last;
            last->next = newNode;
            (*head)->prev = newNode;
        }
    }

    void displayForward(Node* head) {
        if (head == nullptr) return;

        Node* current = head;
        cout << "Traversal in forward direction:" << endl;
        do {
            cout << " " << current->data << " =>";
            current = current->next;
        } while (current != head);
        cout << " " << endl;
    }

    void displayReverse(Node* head) {
        if (head == nullptr) return;

        Node* last = head->prev;
        Node* current = last;
        cout << "Traversal in reverse direction:" << endl;
        do {
            cout << " " << current->data << " =>";
            current = current->prev;
        } while (current != last);
        cout << " " << endl;
    }
};

int main() {
    Node* newNode = new Node();
    Node* head = nullptr;

   
    newNode->addNode(&head, "Yellow");
    newNode->addNode(&head, "Blue");
    newNode->addNode(&head, "Green");
    newNode->addNode(&head, "Red");
    newNode->displayForward(head);  
    newNode->displayReverse(head);

    return 0;
}
