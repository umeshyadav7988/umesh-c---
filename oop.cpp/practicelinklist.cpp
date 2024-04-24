// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     // constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int getlength(Node *head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void insertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head->prev = temp;
//     temp = head;
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     print(head);

//     cout << "Length of linklist = " << getlength(head) << endl;

//     insertAtHead(head, 11);
//     print(head);

//     insertAtHead(head, 11);
//     print(head);

//     insertAtHead(head, 11);
//     print(head);
// }

// Greetings Students
//
// Display Linked list
// sample Input
// 1 2 3 -1
// Sample Output
// 1 2 3
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = accept();
        print(head);
    }

    return 0;
}

// Length of linked list
// Sample Input :
// 3 4 5 2 6 1 9 -1
// Sample Output :
// 7
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
int length(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        cout << length(head) << endl;
    }
    return 0;
}

recursive solution int length(Node *head)
{
    if (head == NULL)
        return 0;
    else
        return 1 + length(head->next);
}

// Display nth node
        // Sample Input 1 : 1 3 4 5 2 6 1 9 -
    // 1 3 Sample Output 1 : 2

#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printIthNode(Node *head, int i)
{
    Node *temp = head;
    while (i != 0 && temp != NULL)
    {
        temp = temp->next;
        i--;
    }
    if (i == 0)
        cout << temp->data;
}

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = accept();
        int pos;
        cin >> pos;
        printIthNode(head, pos);
        cout << endl;
    }
    return 0;
}

// Delete node
        // Sample Input 1 : 1 3 4 5 2 6 1 9 -
    // 1 3 Sample Output 1 : 3 4 5 6 1 9
#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteNode(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        return head->next;
    }

    Node *curr = head;
    int currPos = 0;

    while (curr != NULL && currPos < pos - 1)
    {
        ++currPos;
        curr = curr->next;
    }

    if (curr == NULL || curr->next == NULL)
    {
        return head;
    }

    curr->next = curr->next->next;

    return head;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = accept();
        int pos;
        cin >> pos;
        head = deleteNode(head, pos);
        print(head);
    }

    return 0;
}

// Find a node in LL 2 3 4 5 2 6 1 9 - 1 5 10 20 30 40 50 60 70 - 1 6 Sample Output 1 : 2 - 1

#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int findNode(Node *head, int n)
{
    // Variable to maintain the position in the list.
    int pos = 0;

    while (head != NULL)
    {
        // If element found, return the position of the element.
        if (head->data == n)
        {
            return pos;
        }
        pos++;
        head = head->next;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = accept();
        int val;
        cin >> val;
        cout << findNode(head, val) << endl;
    }
}

// Eliminate duplicates from LL
        // Sample Input 1 : 1 1 2 3 3 3 3 4 4 4 5 5 7 -
    // 1 Sample Output 1 : 1 2 3 4 5 7
// 
#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *currHead = head;

    while (currHead->next != NULL)
    {
        if (currHead->data == currHead->next->data)
        {
            currHead->next = currHead->next->next;
        }
        else
        {
            currHead = currHead->next;
        }
    }

    return head;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = accept();
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}

// display reverse of linked list
        // Sample Input 1 : 1 1 2 3 4 5 -
    // 1 Sample Output 1 : 5 4 3 2 1

#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void display(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    display(head->next);
    cout << head->data << " ";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = accept();
        display(head);
        cout << endl;
    }
    return 0;
}

// Mid of linked list
        // Sample Input 1 : 1 1 2 3 4 5 -
    // 1 Sample Output 1 : 3

#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *midPoint(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *slow = head, *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = accept();
        Node *mid = midPoint(head);
        if (mid != NULL)
        {
            cout << mid->data;
        }
        cout << endl;
    }
    return 0;
}

// Merge Two Sorted list
        // Sample Input 1 : 1 2 5 8 12 -
    // 1 3 6 9 - 1 Sample Output 1 : 2 3 5 6 8 9 12

#include <iostream>
    using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *accept()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    Node *newHead = NULL, *newTail = NULL;

    if (head1->data < head2->data)
    {
        newHead = head1;
        newTail = head1;
        head1 = head1->next;
    }
    else
    {
        newHead = head2;
        newTail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {

        if (head1->data < head2->data)
        {
            newTail->next = head1;
            newTail = newTail->next;
            head1 = head1->next;
        }
        else
        {
            newTail->next = head2;
            newTail = newTail->next;
            head2 = head2->next;
        }
    }

    if (head1 != NULL)
    {
        newTail->next = head1;
    }
    if (head2 != NULL)
    {
        newTail->next = head2;
    }

    return newHead;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head1 = accept();
        Node *head2 = accept();
        Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
        print(head3);
    }
    return 0;
}
