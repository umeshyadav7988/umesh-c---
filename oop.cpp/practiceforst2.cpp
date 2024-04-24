#include<iostream>
using namespace std;

void pop(){
    if(head==NULL){
        return 0;
    }
    else{
        int ans = head->data;
        Node* a = head;
        head= head->next;
        delete a;
        size--;
        return ans;
    }
}
int main(){
    
    return 0;
}