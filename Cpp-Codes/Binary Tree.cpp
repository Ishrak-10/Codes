#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int value)
    {
        data = value;
        right = left = NULL;
    }
};

void PreOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Pre-Order Traversal: ";
    PreOrder(root);
    cout<<endl;

    cout<<"In-Order Traversal: ";
    InOrder(root);
    cout<<endl;

    cout<<"Post-Order Traversal: ";
    PostOrder(root);
    cout<<endl;


    return 0;
}
