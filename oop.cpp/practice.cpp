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
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
    
}

void display(Node *head,int pos){
    Node *temp=head;
    while(pos!=0 && temp!=NULL){
        temp=temp->next;
        pos--;
    }
    if(pos==0){
        cout<<temp->data<<endl;
    }
}

Node *deleteNode(Node *head, int pos)
{
   if(head==NULL)
   return head;
   
   if(pos==0)
   return head->next;
   
   Node *curr=head;
   int currPos=0;
   while(curr!=NULL && currPos<pos-1){
       currPos++;
       curr=curr->next;
   }
   if(curr==NULL || curr->next==NULL){
       return head;
   }
   curr->next=curr->next->next;
   return head;

   
   
 
}

int find(Node *head,int pos){
    Node *temp=head;
    int curpos=0;
    while(temp!=NULL){
        if(temp->data==pos){
            return curpos;
        }
        curpos++;
        temp=temp->next;
    }
    return -1;
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
//cout << length(head) << endl;
int pos;
cin>>pos;
//head=deleteNode(head,pos);
//print(head);
cout<<find(head,pos)<<endl;
}
return 0;
}