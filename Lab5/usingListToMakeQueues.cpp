#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int item) {
        Node* newNode = new Node(item);
        if (front == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued item: " << item << endl;
    }

    int dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow! Cannot dequeue item.\n";
            return -1;
        }
        Node* temp = front;
        int dequeuedItem = temp->data;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
        cout << "Dequeued item: " << dequeuedItem << endl;
        return dequeuedItem;
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();
    return 0;
}
