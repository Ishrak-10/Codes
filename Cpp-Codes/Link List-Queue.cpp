#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
class Queue
{
private:
    Node *Front;
    Node *Rear;
public:
    Queue()
    {
        Front = Rear = NULL;
    }

    void enqueue(int info)
    {
        Node *newNode = new Node();
        newNode->data = info;
        newNode->next = NULL;
        if(Rear == NULL)
        {
            Front = Rear = newNode;
        }
        else
        {
            Rear->next = newNode;
            Rear = newNode;
        }
         cout<<info<<" enqueued to queue"<<endl;
    }

    void dequeue()
    {
        if(Front == NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node *temp = Front;
        cout << temp->data << " dequeued from queue" << endl;
        Front = Front->next;
        if(Front == NULL)
        {
            Rear = NULL;
        }
        delete temp;
    }

    void frontElement()
    {
        if(Front == NULL)
        {
          cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Front Element: "<<Front->data<<endl;
        }
    }

    void Show()
    {
        Node *temp = Front;
        cout<<"Queue: ";
        while(temp != NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.Show();
    q.frontElement();
    q.dequeue();
    q.Show();
    q.frontElement();

    return 0;
}
