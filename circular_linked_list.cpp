#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class ll
{
public:
    node *h, *temp, *tail, *newnode, *prevnode, *nextnode;

    void create()
    {
        int x,n;
        cout<<"How many elements: "<<endl;
        cin>>n;
        h = NULL;
        for (int i = 0; i < n; i++)
        {
            newnode = new node();
        cout<<"Enter data: "<<endl;
        cin>>x;
        newnode->data = x;
        newnode->next = NULL;
        if (h==NULL)
        {
            h = tail = newnode; 
        }
        else
        {
            tail->next = newnode;
            tail = newnode;

        }
        tail->next = h;
        }
        cout<<tail->next->data<<endl;
    }

    void display()
    {
        temp = h; 
        for (;temp!=tail;temp=temp->next)
        {
            cout<<temp->data<<endl;
        }
        cout<<tail->data<<endl;
        
    }
};

int main()
{
    ll a;
    for (;;)
    {
        int option;
        cout << "********* Menu ********" << endl;
        cout << "1. Create" << endl;
        cout << "2. Display" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your option[1-3]:" << endl;
        cin >> option;
        if (option == 3)
        {
            break;
        }
        switch (option)
        {
        case 1:
            a.create();
            break;
        
        case 2:
            a.display();
            break;
        }
    }
    return 0;
}

