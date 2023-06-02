#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class qu_dynamic
{
public:
    node *front = NULL, *rear = NULL;
    node *temp, *newnode;

    void enque()
    {
        int x;
        cout << "Enter Data to Enqueue: " << endl;
        cin >> x;
        newnode = new node();
        newnode->data = x;
        newnode->next = NULL;
        if (front == NULL && rear == NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }

    void display()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is Empty !" << endl;
        }
        else
        {
            cout<<"Data are: "<<endl;
            for (temp=front; temp!=NULL; temp=temp->next)
            {
                cout<<temp->data<<endl;
            }
            
        }
    }

    void dequeue()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "Queue is Empty !" << endl;
        }
        else
        {
            front=front->next;
        }
        
    }
};

int main()
{
    qu_dynamic obj;
    for (;;)
    {
        cout << "******** Menu ********" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
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
            obj.enque(); 
            break;
        case 2:
            obj.dequeue();
            break;
        case 3:
            obj.display();
            break;
        }
    }
}