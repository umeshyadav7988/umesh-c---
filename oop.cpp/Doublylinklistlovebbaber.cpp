#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node * next;

    // constructor  
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

// traversing a link list 
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// gives legth of link list 
int getlength(Node* head){
    int length=0;

    Node* temp=head;

    while(temp!=NULL){
        length++;
        temp=temp->next;
    }

    return length;
}

void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
int main(){

    Node* node1=new Node(10);

    Node* head = node1;
    print(head);

    cout<<getlength(head)<<endl;

    insertAthead(head,11);
    print(head);
    return 0;
}