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

void preorder(node*root)
{
    if (root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<endl;
        preorder(root->left_child);
        preorder(root->right_child);
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

void postorder(node*root)
{
    if (root==NULL)
    {
        return; 
    }
    else
    {
      postorder(root->left_child); 
      postorder(root->right_child);
      cout<<root->data<<endl;  
    } 
}


int main()
{
    node *root = NULL;
    root = create();
    cout<<"Preorder is: "<<endl;
    preorder(root);
    cout<<endl<<endl;
    cout<<"Inorder is: "<<endl;
    inorder(root);
    cout<<endl<<endl;
    cout<<"Postorder is: "<<endl;
    postorder(root);


}