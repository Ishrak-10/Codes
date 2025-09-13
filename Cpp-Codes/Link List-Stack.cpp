#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *Top;
public:
    Stack()
    {
        Top = NULL;
    }

    void push(int info)
    {
        Node *newNode = new Node();
        newNode->data = info;
        newNode->next = Top;
        Top = newNode;
        cout<<info<<" pushed to stack"<<endl;
    }

    void pop()
    {
        if(Top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = Top;
        cout<<Top->data<<" popped from stack"<<endl;
        Top = Top->next;
        delete temp;
    }

    void topElement()
    {
        if(Top == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout<<"Top Element: "<<Top->data<<endl;
        }

    }

    void Show()
    {
        Node *temp = Top;
        cout<<"Stack: ";
        while(temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.Show();
    s.topElement();
    s.pop();
    s.Show();
    s.topElement();

    return 0;
}



