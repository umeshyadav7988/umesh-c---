#include<iostream>
using namespace std;

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int length(Node *head){
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node *head=takeinput();
        cout<<print(head);
        cout<<length(head)
    }
    
    return 0;
}