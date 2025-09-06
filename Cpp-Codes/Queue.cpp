#include<iostream>
using namespace std;

class MyQueue
{
    int Queue[5];
    int Front, Rear, MaxSize;
public:
    MyQueue(int Size = 5)
    {
        MaxSize = Size;
        Front = Rear = -1;
    }

    bool isEmpty()
    {
        return ((Front == -1) && (Rear == -1));
    }

    bool isFull()
    {
        return (Rear == (MaxSize-1));
    }

    bool push(int a)
    {
        if(isFull())
        {
            cout<<"Queue is Full\n";
            return false;
        }
        if(isEmpty())
        {
            Front = Rear = 0;
        }
        else
        {
            Rear++;
        }
        Queue[Rear] = a;
        return true;
    }

    bool pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty\n";
            return false;
        }
        if(Front==Rear)
        {
            Front=Rear=-1;
        }
        else
        {
           Front++;
        }
        return true;
    }

    int FrontElement()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return Queue[Front];
    }

    void Show()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Queue: \n";
        for(int i=Front; i<=Rear; i++)
        {
            cout<<Queue[i]<<endl;
        }
    }
};

int main()
{
    MyQueue q;
    q.Show();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.Show();
    q.push(6);
    q.pop();
    q.Show();
    cout<<"Front Element: " << q.FrontElement() << endl;

    return 0;
}
