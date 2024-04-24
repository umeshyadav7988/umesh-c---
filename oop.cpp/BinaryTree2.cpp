#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<char>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
int main(){

    BinaryTreeNode<char>* root= new BinaryTreeNode<char>('A');
    BinaryTreeNode<char>* node1 = new BinaryTreeNode<char>('B');
    BinaryTreeNode<char>* node2 = new BinaryTreeNode<char>('C');
    root->left=node1;
    root->right=node2;

    printTree(root);



    delete root;
    
    return 0;
}