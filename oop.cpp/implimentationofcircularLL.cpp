#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Node *addToEmpty(struct Node *last, int data)
{
    // this function is only for empty list
    if (last != NULL)
        return last;

    // creating a  node dynamically

    class Node *temp = new Node();

    // Assigning the data
    temp->data = data;
    last = temp;

    // creating the link
    last->next = last;
    return last;
}

class Node *addBegin(class Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);

    class Node *temp = new Node();

    temp->data = data;
    temp->next = last->next;
    last->next = temp;

    return last;
}
void traverse(class Node *last)
{
    class Node *p;

    // if list is emoty,return
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    // pointing to first node of the list
    p = last->next;

    // traversing te list
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != last->next);
}

int main()
{
    class Node *last = NULL;

    last = addToEmpty(last, 6);

    last = addBegin(last, 4);
    last = addBegin(last, 2);

    // last=addEnd(last,8);
    // last=addEnd(last,12);
    // last=addToEmpty(last,10,8);

    traverse(last);
    last = addBegin(last, 7);
    last = addBegin(last, 8);
    traverse(last);

    return 0;
}