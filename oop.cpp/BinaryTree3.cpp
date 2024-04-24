// #include <bits/stdc++.h>
// using namespace std;

// template <typename T>
// class BinaryTreeNode
// {
// public:
//     T data;
//     BinaryTreeNode *left;
//     BinaryTreeNode *right;

//     BinaryTreeNode(T data)
//     {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
//     ~BinaryTreeNode()
//     {
//         delete left;
//         delete right;
//     }
// };

// void printTree(BinaryTreeNode<int>* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" : ";
//     if(root->left!=NULL){
//         cout<<"L"<<root->left->data<<" ";
//     }
//     if(root->right!=NULL){
//         cout<<"R"<<root->right->data<<" ";
//     }
//     cout<<endl;
//     printTree(root->left);
//     printTree(root->right);
// }

// BinaryTreeNode<int> *takeinput()
// {
//     int rootdata;
//     cout << "Enter data :" << endl;
//     cin >> rootdata;
//     if (rootdata == -1)
//     {
//         return NULL;
//     }

//     BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
//     BinaryTreeNode<int> *leftChild = takeinput();
//     BinaryTreeNode<int> *rightChild = takeinput();
//     root->left = leftChild;
//     root->right = rightChild;
//     return root;
// }
// int main()
// {
//     BinaryTreeNode<int> *root = takeinput();
//     printTree(root);
//     delete root;
//     return 0;
// }



#include <bits/stdc++.h>
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

BinaryTreeNode<char> *takeinput()
{
    char rootdata;
    cout << "Enter data :" << endl;
    cin >> rootdata;
    cin.get();
    if (rootdata == 'z')
    {
        return NULL;
    }

    BinaryTreeNode<char> *root = new BinaryTreeNode<char>(rootdata);
    BinaryTreeNode<char> *leftChild = takeinput();
    BinaryTreeNode<char> *rightChild = takeinput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}
int main()
{
    BinaryTreeNode<char> *root = takeinput();
    printTree(root);
    delete root;
    return 0;
}