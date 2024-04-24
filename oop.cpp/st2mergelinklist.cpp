

// print ithNode
// void printithNode(Node* head,int i){
// Node* temp = head;
// while(i!=0 && temp!=NULL){
// temp=temp->next;
// i--;
// }
// if(n==0){
// cout<<temp->data;
// }
// }

// int findNode(Node* head,int n){
// int pos;
// while(head!=NULL){
// if(head==n){
// return pos;
// }
// pos++;
// head=head->next;
// }
// return -1;
// }

// void deleteNode(Node* head,int n){
// if(head==n){
// return head;
// }
// if(pos==0){
// return head=head->next;
// }
// Node* curr=head;
// int currpos;
// while(curr!=NULL && currpos<pos-1){
// ++currpos;
// curr=curr->next;
// }
// if(curr==NULL || curr->next==NULL){
// return head;
// }
// curr->next=curr->next->next;
// return head;
// }

Node *removeDuplicates(Node *head)

{
    if(head==n){
        return head;
    }
    Node* currHead = head;
    while(curr->next!=NULL){
        if(currHead->data==curr->next->data){
            currHead->next=currHead->next->next;
        }
        else{
            currHead=currHead->next;
        }
    }
    return head;
}