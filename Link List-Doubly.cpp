#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};
void PrintList(Node *temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void PrintListBack(Node *temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<"<->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}
void AddDataHead(Node* &head, Node* &tail, int info)
{
    Node *newNode = new Node();
    newNode->data = info;
    newNode->next = head;
    newNode->prev = NULL;
    head->prev = newNode;
    head = newNode;
}
void AddDataTail(Node* &head, Node* &tail, int info)
{
    Node *newNode = new Node();
    newNode->data = info;
    newNode->next = NULL;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *n1,*n2,*n3,*n4,*head,*tail;
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

    n1->prev = NULL;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;

    head = n1;
    tail = n4;
    PrintList(head);
    AddDataTail(head,tail,5);
    PrintList(head);
    AddDataHead(head,tail,0);
    PrintList(head);
    PrintListBack(tail);
}

