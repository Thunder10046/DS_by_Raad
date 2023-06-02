#include<bits/stdc++.h>
using namespace std; 

class node
{
    public:
    int data; 
    node*left, *right;//B tree
};

class tree{
    public:
    node*root; node*temp;

    node*create()
    {
        root = NULL;
        int x;
        node*newnode = new node();
        cout<<"Enter Data(-1 for no node): "<<endl;
        cin>>x;
        if (x==-1)
        {
            return 0;
        }
        newnode->data = x;
        printf("Enter Left Child of %d: ",x);
        newnode->left = create();
        printf("Enter Right Child of %d: ",x);
        newnode->right = create();
        return newnode;
    }

    void display()
    {
        cout<<"Tree Contents are(Pre-order Traversing): "<<endl;
        for (temp = root; (temp->right!=NULL) && (temp->left!=NULL);temp=te)
        {
            /* code */
        }
        
        
        
    }

};


int main()
{
    tree a;
    for (;;)
    {
        int option;
        cout << "********* Menu ********" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Search" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your option[1-6]:" << endl;
        cin >> option;
        if (option == 6)
        {
            break;
        }
        switch (option)
        {
        case 1:
            a.create();
            break;
        case 5:
            a.display();
            break;
        }
    }
    
}
