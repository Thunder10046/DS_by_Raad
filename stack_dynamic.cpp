#include <bits/stdc++.h>
using namespace std;

class node{
    public: 
    int data; 
    node*next;
};

class st
{
public:
    node*top=NULL;
    node*newnode, *temp; 

    void push()
    {
        int x;
        newnode = new node();
        cout << "Enter data you want to push: " << endl;
        cin >> x;
        newnode->data = x; 
        newnode->next = top; 
        top = newnode;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty! " << endl;
        }
        else
        {
            temp = top; 
            top = temp->next;
        }
    }

    void display()
    {
        cout << "Data are: " << endl;
        for (temp=top;temp!=0; temp=temp->next)
        {
            cout <<temp->data<< endl;
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