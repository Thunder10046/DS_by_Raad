#include<bits/stdc++.h>
using namespace std; 

char tree[10];

void root (char key)
{
    if (tree[0]!='\0')
    {
        cout<<"Tree already had root!"<<endl;
    }
    else
    {
        tree[0] = key;
    }
}

void set_Left(char key, int parent)
{
    tree[(parent*2)+1]=key;
}

void set_Right(char key, int parent)
{
    tree[(parent*2)+2]=key;
}

void print()
{
    for (int i = 0; i < 10; i++)
    {
        cout<<tree[i]<<"-";
    }
    
}

int main()
{
    root('A');
    set_Left('B',0);
    set_Right('C',0);
    set_Left('D', 1);
    set_Right('E',1);
    set_Right('F',2);
    print();
}