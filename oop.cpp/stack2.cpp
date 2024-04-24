#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *prev, *next;
    // prev and next pointers to point to the previous and next element in the deque.
};

// Function to create a new node in the deque or doubly-linked list.
Node *createnode(int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

class Deque
{
public:
    Node *front;
    Node *rear;
    int Size;

public:
    Deque()
    {
        front = rear = NULL;
        Size = 0;
    }

    // Operations/Functionalities on Deque.
    void insertFront(int value);
    void insertRear(int value);
    void deleteFront();
    void deleteRear();
    int getFront();
    int getRear();
    int size();
    bool isEmpty();
};

// This function checks if the deque is empty.
bool Deque::isEmpty()
{
    if (Size == 0)
    {
        return true;
    }
    return false;
}

// Function to return the size of the deque.
int Deque::size()
{
    return Size;
}

// Function to insert an element at the beginning of the deque.
void Deque::insertFront(int value)
{
    Node *newNode = createnode(value);
    // If deque is empty then update the front and rear pointers.
    if (front == NULL)
    {
        rear = front = newNode;
    }
    // Otherwise insert at the beginning of the deque according to the algorithm described above.
    else
    {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }

    // Increase the size of the queue by one.
    Size++;
}

// Function to insert an element at the end of the deque.
void Deque::insertRear(int value)
{
    Node *newNode = createnode(value);
    // If deque is empty then update the front and rear pointers.
    if (rear == NULL)
        front = rear = newNode;
    // Otherwise insert at the end of the deque according to the algorithm described above.
    else
    {
        newNode->prev = rear;
        rear->next = newNode;
        rear = newNode;
    }

    // Increase the size of the queue by one.
    Size++;
}

// Function to delete the element from the front end of the deque.
void Deque::deleteFront()
{
    // Check if the deque is empty.
    if (isEmpty())
        cout << "UnderFlow\n";

    // Otherwise, delete the element at the beginning of the deque according to the algorithm described above.
    else
    {
        Node *temp = front;
        front = front->next;
        // If only one element was present in the deque.
        if (front == NULL)
            rear = NULL;
        else
            front->prev = NULL;
        free(temp);

        // Decrease the size of the deque by one.
        Size--;
    }
}

// Function to delete the element from the rear end of the deque.
void Deque::deleteRear()
{
    // Check if the deque is empty.
    if (isEmpty())
        cout << "UnderFlow\n";
    // Otherwise delete the element at the end of the deque according to the algorithm described above.
    else
    {
        Node *temp = rear;
        rear = rear->prev;
        // If only one element was present in the deque.
        if (rear == NULL)
            front = NULL;
        else
            rear->next = NULL;
        free(temp);

        // Decrease the size of the deque by one.
        Size--;
    }
}

// Function to return the element at the front of the deque.
int Deque::getFront()
{
    // If deque is empty, then return garbage value.
    if (isEmpty())
        return -1; // garbage value
    return front->value;
}

// Function to return the element at the back of the deque.
int Deque::getRear()
{
    // If deque is empty, then returns
    // garbage value
    if (isEmpty())
        return -1;
    return rear->value;
}

int main()
{

    Deque deq;
    // keep taking input till the user ends the program.
    int val;
    cin >> val;
    deq.insertRear(val);
    cin >> val;
    deq.insertRear(val);
    cin >> val;
    deq.insertRear(val);
    cin >> val;

    deq.insertFront(val);
    cin >> val;
    deq.insertFront(val);
    cin >> val;
    deq.insertFront(val);

    cout << "Front element: " << deq.getFront() << endl;
    if (deq.getRear() != -1)
        cout << "Rear element: " << deq.getRear() << endl;
    else
        cout << "The deque is empty" << endl;

    deq.deleteFront();
    deq.deleteRear();
    cout << "Front element: " << deq.getFront() << endl;
    if (deq.getRear() != -1)
        cout << "Rear element: " << deq.getRear() << endl;
    else
        cout << "The deque is empty" << endl;

    if (deq.isEmpty())
        cout << "The deque is empty" << endl;
    else
        cout << "The deque is not empty" << endl;
    cout << "The size of the deque is " << deq.size() << endl;
    return 0;
}