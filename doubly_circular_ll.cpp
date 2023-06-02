#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data; 
    node*prev, *next;

};

class dbly_cin{
    public: 
    node*h, *tail, *newnode, *temp; 

    void create()
    {
        cout<<"Enter how many elements: "<<endl;
        int n,x; 
        cin>>n;
        h = NULL; 
        for (int i = 0; i < n; i++)
        {
            newnode = new node();
            cout<<"Enter Data: "<<endl;
            cin>>x;
            newnode->data = x;
            if (h==NULL)
            {
                h=tail=newnode;
                h->prev = newnode;
                h->next = newnode;
            }
            else
            {
                tail->next = newnode; 
                newnode->prev = tail;
                newnode->next = h; 
                tail->prev = newnode;
                tail = newnode;
            }
            
        }
        cout<<tail->next->data<<endl;
            cout<<h->prev->data<<endl;
        
    }

    void display()
    {
        for (temp = h; temp!=tail; temp = temp->next)
        {
            cout<<temp->data<<endl;
        }
        cout<<temp->data<<endl;
    }

};

int main()
{
    dbly_cin a; 
    a.create();
    a.display();

}