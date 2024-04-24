
#include<bits/stdc++.h>
#include<queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

void printTree(BinaryTreeNode<int>* root){
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

BinaryTreeNode<int> *takeinput()
{
    int rootdata;
    cout << "Enter data :" << endl;
    cin >> rootdata;
    cin.get();
    if (rootdata == -1)
    {
        return NULL;
    }
    queue<BinaryTreeNode<int>*>pendlingNodes;
    pendlingNodes.push(root);
    while(pendlingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendlingNodes.front();
        pendlingNodes.pop();
        cout<<"Enter left child of "<<front->data<<endl;
        int leftChilddata;
        if(leftChilddata!=-1){
            BinaryTreeNode<int>* child=new BinaryTreeNode<int>(leftChilddata);
            front->left=child;
            pendlingNodes.push(child);
        }
        cout<<"Enter right child of "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
            BinaryTreeNode<int>* child=new BinaryTreeNode<int>(rightChildData);
            front->right=child;
            pendlingNodes.push(child);
        }
    }
    return root;
}
int main()
{
    BinaryTreeNode<int> *root = takeinput();
    printTree(root);
    delete root;
    return 0;
}