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
        if (rear == (MAX_SIZE - 1)) {
            cout << "Queue Overflow! Cannot enqueue item.\n";
            return;
        }
        if (front == -1)
            front = 0;
        queue[++rear] = item;
        cout << "Enqueued item: " << item << endl;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot dequeue item.\n";
            return -1;
        }
        int dequeuedItem = queue[front++];
        cout << "Dequeued item: " << dequeuedItem << endl;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
        return dequeuedItem;
    }
};

int main() {
    Queue myQueue;
    myQueue.enqueue(11);
    myQueue.enqueue(22);
    myQueue.enqueue(33);
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.dequeue();

    return 0;
}
