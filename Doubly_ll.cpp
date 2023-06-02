#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev; // Doubbly linked list
};

class ll
{
public:
    node *h, *tail, *newnode, *prevnode, *nextnode, *temp;

    void create()
    {
        int x, choice = 1;
        h = NULL;
        while (choice)
        {
            cout << "Enter data to input: " << endl;
            cin >> x;
            newnode = new node();
            newnode->data = x;
            if (h == NULL)
            {
                h = tail = newnode;
                h->next = h;
                h->prev = h;
            }
            else
            {
                tail->next = newnode;
                newnode->prev = tail;
                newnode->next = h;
                h->prev = newnode;
                tail = newnode;
            }
            cout << "You want to enter more input? Press any 1 to continue or Press 2 to exit. " << endl;
            cin >> choice;
            if (choice == 2)
            {
                break;
            }
        }
    }
    void display()
    {
        cout << endl;
        for (temp = h; temp != tail; temp = temp->next)
        {
            cout << temp->data << endl;
        }
        cout << temp->data;
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
        h->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
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
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = h;
        h->prev = newnode;
        tail = newnode;
    }
    void insert_at_middle_or_any()
    {
        display();
        temp = h;
        int pos, x, i = 1;
        cout << "Enter Position: " << endl;
        cin >> pos;
        if (pos == 1)
        {
            insert_at_first();
        }
        else
        {

            newnode = new node();
            cout << "Enter Data: " << endl;
            cin >> x;
            newnode->data = x;
            while (i < (pos - 1))
            {
                temp = temp->next;
                i++;
            }
            newnode->prev = temp;
            newnode->next = temp->next;
            temp->next->prev = newnode;
            temp->next = newnode;
        }
    }
    void delete_at_start()
    {
        temp = h;
        if (h == NULL)
        {
            cout << "List is Empty! " << endl;
        }
        else if (h->next == h)
        {
            h = tail = NULL;
        }
        else
        {
            h = h->next;
            h->prev = tail;
            tail->next = h;
        }
    }
    void delete_at_end()
    {

        temp = tail;
        if (h == NULL)
        {
            cout << "List is Empty! " << endl;
        }
        else if (h->next == h)
        {
            h = tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = h;
            h->prev = tail;
        }
    }
    void delete_at_middle_or_any()
    {
        display();
        int pos, x;
        cout << "Enter Position: " << endl;
        cin >> pos;
        temp = h;
        
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if (temp->next==h)
        {
            tail=temp->prev;
        }
        
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
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your option[1-5]:" << endl;
        cin >> option;
        if (option == 5)
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
            a.display();
            break;
        }
    }
    return 0;
}
