#include <iostream>
using namespace std;

class Node
{
public:
    int num;
    Node *next;
    Node(int val)
    {
        num = val;
        next = NULL;
    }
    void insert(Node **h, int val)
    {
        Node *n = new Node(val);
        n->next = *h;
        *h = n;
    }

    void display_all_nodes(Node *h)
    {
        cout << "The list contain the data entered " << endl;
        struct Node *temp = h;
        while (temp != NULL)
        {
            cout << temp->num << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()

{
    
    Node *head = nullptr;

    head->insert(&head, 1);
    head->insert(&head, 6);
    head->insert(&head, 18);
    head->insert(&head, 4);
    head->insert(&head, 12);
    head->display_all_nodes(head);
    return 0;
}