#include<iostream>
using namespace std;

void printLevelWise(binaryTreeNode<int> *root){
    if(root==NULL){
        return ;
        queue<binaryTreeNode<int>*>pending;
        pending.push(root);
        while (pending.size()!=0)
        {
            /* code */
            cout<<pending.front()->data":";
            if(pending.front()->left==NULL){
                cout<<"L:-1";
            }
            if(pending.front()->left!=NULL){
                cout<<"L:"<<pending.front()->left->data<<",";
                pending.push(pending.front->left);
            }
            if(pending.front()->right==NULL){
                cout<<"R:-1";
            }
            if(pending.front()->right!=NULL)
            cout<<"R:"<<pending.front()->right->data;
            pending.push(pending.front()->right);
        }
        cout<<endl;
        pending.pop();
        
    }
}
int main(){
    
    return 0;
}