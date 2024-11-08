#include <iostream>
const int MAX_SIZE = 100;

using namespace std;

class Queue {
private:
    int queue[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue item.\n";
            return;
        }
        if (isEmpty())
            front = 0;
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = item;
        cout << "Enqueued item: " << item << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue item.\n";
            return -1;
        }
        int dequeuedItem = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        cout << "Dequeued item: " << dequeuedItem << endl;
        return dequeuedItem;
    }

    bool isFull() {
        return (front == (rear + 1) % MAX_SIZE);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
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
