#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void PrintList(Node *temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<"-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void AddDataLast(Node *temp, int info)
{
    Node *newNode = new Node();
    newNode->data = info;
    newNode->next = NULL;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void AddDataFirst(Node* &head,int info)
{
    Node *newNode = new Node();
    newNode->data = info;
    newNode->next = head;
    head = newNode;
}

void Search(Node *temp, int target)
{
    int flag = 0;
    while(temp != NULL)
    {
        if(target == temp->data)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if(flag==1)
    {
        cout<<target<<" Found"<<endl;
    }
    else
    {
        cout<<target<< " Not found"<<endl;
    }
}

int main()
{
    Node *n1,*n2,*n3,*n4,*head;
    n1 = new Node();
    n2 = new Node();
    n3 = new Node();
    n4 = new Node();

    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    head = n1;

    PrintList(head);
    AddDataLast(head,5);
    PrintList(head);
    AddDataFirst(head,0);
    PrintList(head);
    Search(head,4);
    Search(head,8);

    return 0;

}

