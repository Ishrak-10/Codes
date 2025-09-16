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

Node *Insert(Node *root, int value)
{
    if(root == NULL)
    {
        return new Node(value);
    }
    if(value < root->data)
    {
        root->left = Insert(root->left, value);
    }
    else if(value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    return root;
}

bool Search(Node *root, int key)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->data == key)
    {
        return true;
    }
    if(key < root->data)
    {
        return Search(root->left,key);
    }
    else
    {
        return Search(root->right,key);
    }
}

int main()
{
    Node *root = NULL;

    root = Insert(root,30);
    Insert(root,50);
    Insert(root,40);
    Insert(root,20);
    Insert(root,10);

    int key = 40;
    if(Search(root,key))
    {
        cout<<key<<" Found in BST"<<endl;
    }
    else
    {
        cout<<key<<" Not Found in BST"<<endl;
    }

    return 0;
}
