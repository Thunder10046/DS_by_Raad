#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left_child;
    node *right_child;
};

node *create() //create function will return the address of newnode in each call
{
    int x;
    node *newnode = new node(); 
    cout << "Enter data: " << endl;
    cin >> x;
    if (x == -1)
    {
        return 0; //base value to end recursion
    }
    newnode->data = x;
    cout << "Enter left child of " << x << " :" << endl;
    newnode->left_child = create(); //again calling of create() fucntion will return the adddress of the newly created node and thus newnode->left_child would work as a linker to the root of that node

    cout << "Enter right child of " << x << " :" << endl;
    newnode->right_child = create();
    return newnode; // each call returns newnode, i.e. the address of newly created node;
}

void insert(node*root)
{
    node*newnode = new node();
    node*temp;
    temp = root;
    int x; 
    cout<<"Enter Data: "<<endl;
    cin>>x;
    newnode->data = x;
    newnode->left_child = NULL;
    newnode->right_child = NULL;
    if (root==NULL)
    {
        root = newnode;
    }
    else if (temp->data>=x)
    {
        if (temp->left_child==NULL)
        {
            temp->left_child = newnode;
        }
        else
        {
            temp = temp->left_child;
        }
    }
    else
    {
        if (temp->right_child==NULL)
        {
            temp->right_child = newnode;
        }
        else
        {
            temp = temp->right_child;
        }
    }

}
void inorder(node*root)
{
    if (root==NULL)
    {
        return; 
    }
    else
    {
      inorder(root->left_child); 
      cout<<root->data<<endl;
      inorder(root->right_child);  
    } 
}

int main()
{
    node *root = NULL;
    cout<<"Enter Binary Tree Elements carefully: "<<endl;
    root = create();
    insert(root);
    inorder(root);

}