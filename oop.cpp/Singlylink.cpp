#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAttail(Node *&tail, int data)
{
    // create a new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
{

    // insert at start
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    // insert at last
    if (temp->next == NULL)
    {
        insertAttail(head, data);
    }
    // creating a node for d
    Node *nodeToInset = new Node(data);

    nodeToInset->next = temp->next;

    temp->next = nodeToInset;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        // delete any middle nad last node
        Node *curr = head;
        Node *prev = NULL;

        int count;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    // insertAtHead(head, 13);
    // print(head);

    insertAttail(tail, 20);
    print(head);

    insertAttail(tail, 100);
    print(head);

    // insertAtPosition(tail,head,5,12);
    // print(head);

    cout << " head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    deleteNode(1, head);
    print(head);
}