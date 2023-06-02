#include <bits/stdc++.h>
using namespace std;

class st
{
public:
    int stak[5]; //stack for static memory 
    int top = -1;

    void push()
    {
        int x;
        cout << "Enter data you want to push: " << endl;
        cin >> x;
        if (top == 4)
        {
            cout << "Stack is FULL !" << endl;
        }
        else
        {
            top++;
            stak[top] = x;
        }
    }
    void pop()
    {
        int elem;
        if (top == -1)
        {
            cout << "Stack is Empty! " << endl;
        }
        else
        {
            elem = stak[top];
            top--;
            cout << elem << endl;
        }
    }

    void peek()
    {
        // Also can be defined by the name of top
        if (top == -1)
        {
            cout << "Stack is Epty! " << endl;
        }
        else
        {
            cout << stak[top];
        }
    }

    void display()
    {
        int i;
        cout << "Data are: " << endl;
        for (i = top; i >= 0; i--)
        {
            cout << stak[i] << endl;
        }
    }
};

int main()
{
    st obj;
    for (;;)
    {
        cout << "******** Menu ********" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your option[1-4]:" << endl;
        int option;
        cin >> option;
        if (option == 4)
        {
            break;
        }
        switch (option)
        {
        case 1:
            obj.push(); 
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.display();
            break;
        }
    }
}