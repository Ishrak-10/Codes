#include<iostream>
using namespace std;

class MyStack
{
    int Stack[5];
    int Top;
    int MaxSize;
public:
    MyStack(int Size=5)
    {
        MaxSize = Size;
        Top = 0;
    }

    bool isEmpty()
    {
        return (Top == 0);
    }

    bool isFull()
    {
        return (Top == MaxSize);
    }

    bool push(int a)
    {
        if(isFull())
        {
            cout<<"Stack is Full\n";
            return false;
        }
        Stack[Top++] = a;
        return true;
    }

    bool pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty\n";
            return false;
        }
        Top--;
        return true;
    }

    int TopElement()
    {
        return Stack[Top-1];
    }

    void Show()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty\n";
            return;
        }
        cout<<"Stack: \n";
        for(int i=Top-1; i>=0; i--)
        {
            cout<<Stack[i]<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.Show();
    s.push(6);
    s.pop();
    s.Show();
    cout<<"Top Element: " << s.TopElement() << endl;

    return 0;
}
