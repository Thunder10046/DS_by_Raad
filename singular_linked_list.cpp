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
    node *h, *temp, *newnode, *prevnode, *nextnode;

    void create()
    {
        int x, n;
        cout << "Enter how many elements: " << endl;
        cin >> n;
        h = NULL;
        temp = h;
        for (int i = 1; i <= n; i++)
        {
            newnode = new node();
            cout << "Enter element: " << endl;
            cin >> x;
            newnode->data = x;
            newnode->next = NULL;
            if (h == NULL)
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
    int count()
    {
        int c = 0;
        temp = h;
        for (; temp != NULL; temp = temp->next)
        {
            c++;
        }
        return c;
    }
    void display()
    {
        cout<<endl;
        for (temp = h; temp != NULL; temp = temp->next)
        {
            cout <<temp->data<<endl;
        }
        cout << endl;
    }
    void insert_at_first()
    {
        display();
        int x;
        newnode = new node();
        cout << "This section is for inserting at first" << endl;
        cout << "Enter Element: " << endl;
        cin >> x;
        newnode->data = x;
        newnode->next = h;
        h = newnode;
    }
    void insert_at_last()
    {
        display();
        int x;
        newnode = new node();
        cout << "This section is for inserting at last" << endl;
        cout << "Enter Element: " << endl;
        cin >> x;
        newnode->data = x;
        newnode->next = NULL;
        temp = h;
        for (; temp->next != NULL; temp = temp->next)
        {
        }
        temp->next = newnode;
    }
    void insert_at_middle_or_any()
    {
        display();
        int pos, x;
        cout << count() << " Nodes Created." << endl;
        cout << "Enter Position: " << endl;
        cin >> pos;
        if (pos > count())
        {
            cout << "Invalid Position" << endl;
        }
        else
        {
            temp = h;
            for (int i = 1; i < pos; i++)
            {
                temp = temp->next;
            }
            newnode = new node();
            cout << "Enter Data: " << endl;
            cin >> x;
            newnode->data = x;
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    void update()
    {
        display();
        int x, y;
        cout << "Enter The Number to search: " << endl;
        cin >> x;
        for (temp = h; temp != NULL; temp = temp->next)
        {
            if (temp->data == x)
            {
                cout << "Enter Number to update: " << endl;
                cin >> y;
                temp->data = y;
                break;
            }
        }
    }
    void delete_at_start()
    {
        temp = h;
        h = h->next;
    }
    void delete_at_end()
    {
        
        temp = h;
        for (; temp->next != NULL; temp = temp->next)
        {
            prevnode = temp;
        }
        prevnode->next = NULL;
    }
    void delete_at_middle_or_any()
    {
        display();
        int pos, x;
        cout << "Enter Position: " << endl;
        cin >> pos;
        temp = h;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
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
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Update" << endl;
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
        case 2:
            int dropt;
            cout << "Where to insert?" << endl;
            cout << "i. Start" << endl;
            cout << "ii. End" << endl;
            cout << "iii. Middle or any" << endl;
            cin >> dropt;
            switch (dropt)
            {
            case 1:
                a.insert_at_first();
                break;
            case 2:
                a.insert_at_last();
                break;
            case 3:
                a.insert_at_middle_or_any();
                break;
            }
            break;
        case 3:
            int dropt2;
            cout << "Where to delete?" << endl;
            cout << "i. Start" << endl;
            cout << "ii. End" << endl;
            cout << "iii. Middle or any" << endl;
            cin >> dropt2;
            switch (dropt2)
            {
            case 1:
                a.delete_at_start();
                break;
            case 2:
                a.delete_at_end();
                break;
            case 3:
                a.delete_at_middle_or_any();
                break;
            }
            break;
        case 4:
            a.update();
            break;
        case 5:
            a.display();
            break;
        }
    }
    return 0;
}
