#include<bits/stdc++.h>
using namespace std; 

class node{
    public:
    int data; 
    node*next;
};

class sl{
    public: 
    node*h, *temp, *newnode, *nextnode;

    void create()
    {

        int x,n;
        cout<<"How many elements: "<<endl;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            newnode = new node();
        cout<<"Enter data: "<<endl;
        cin>>x;
        newnode->data = x;
        newnode->next = NULL;
        if (h==NULL)
        {
            h = temp = newnode; 
        }
        else
        {
            temp->next = newnode;

        }
        temp = newnode;
        }
    
        
    }

    void search()
    {
        int key;
        dispaly(); 
        cout<<endl<<"Enter keynumber: "<<endl;
        cin>>key;
        for (temp = h; temp!=NULL;temp = temp->next)
        {
            if (key==temp->data)
            {
                cout<<"found!"<<endl;
            }
            
        }
        


    }
    void insert()
    {
        search();
        newnode = new node();
        int x; 
        cout<<"Enter data to insert: "<<endl;
        cin>>x;
        newnode->data = x;
        nextnode= temp->next;
        temp->next = newnode;
        newnode->next = nextnode;

    }

    void dispaly()
    {
        for (temp = h; temp!=NULL;temp = temp->next)
        {
            cout<<temp->data<<endl;
        }
        
    }

};

int main()
{
    sl a; 
    a.create(); 
    a.insert();
    a.dispaly();

}