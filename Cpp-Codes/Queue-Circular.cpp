#include<iostream>
using namespace std;

class CircularQueue
{
    int *Queue;
    int Front, Rear, MaxSize;
public:
    CircularQueue(int Size = 5)
    {
        MaxSize = Size;
        Queue = new int[MaxSize];
        Front = -1;
        Rear = -1;
    }

    bool isEmpty()
    {
        return ((Front == -1) && (Rear == -1));
    }

    bool isFull()
    {
        return (((Rear+1)%MaxSize) == Front);
    }

    bool enqueue(int element)
    {
        if(isFull())
        {
            cout<<"Queue is Full"<<endl;
            return false;
        }
        if(isEmpty())
        {
            Front = Rear = 0;
        }
        else
        {
            Rear = ((Rear+1)%MaxSize);
        }
        Queue[Rear] = element;
        return true;
    }

    bool dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return false;
        }
        if(Front==Rear)
        {
            Front=Rear=-1;
        }
        else
        {
            Front = ((Front+1)%MaxSize);
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
            cout<<"Queue is Empty"<<endl;
            return;
        }
        if(Front <= Rear)
        {
            for(int i=Front; i<=Rear; i++)
            {
                cout<<Queue[i]<<" ";
            }cout<<endl;
        }
        else
        {
            for(int i=0; i<=Rear; i++)
            {
                cout<<Queue[i]<<" ";
            }
            for(int i=Front; i<MaxSize; i++)
            {
                cout<<Queue[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    CircularQueue C;
    C.Show();
    C.enqueue(1);
    C.Show();
    C.enqueue(2);
    C.Show();
    C.enqueue(3);
    C.Show();
    C.dequeue();
    C.Show();
    C.enqueue(4);
    C.Show();
    C.enqueue(5);
    C.Show();
    C.enqueue(6);
    C.Show();
    C.enqueue(7);
    C.Show();
    cout<<"Top Elemnet: "<<C.FrontElement()<<endl;
    C.dequeue();
    C.Show();
    C.dequeue();
    C.Show();
    C.enqueue(8);
    C.Show();
    cout<<"Top Elemnet: "<<C.FrontElement()<<endl;

    return 0;

}
