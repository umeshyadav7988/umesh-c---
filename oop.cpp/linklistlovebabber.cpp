#include<iostream>
using namespace std;


class Node{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(Node* &head,int d){
    Node* temp= new Node(d);
    temp -> next = head;
    head=temp;
}
void print(Node* &head){
    Node* node1= head;

    while(node1!=NULL){
        cout<<node1->data<<endl;
        cout<<node1->next<<endl;
    }
}

int main(){
    Node* temp= new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head=node1;
    print(head);

    insert(head,12);

    print(head);
    return 0;
}