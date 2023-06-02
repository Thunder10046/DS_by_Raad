#include <bits/stdc++.h>
using namespace std;

class qu
{
public:
    int queue[5]; //stack for static memory 
    int front =-1, rear=-1;

    void enque()
    {
        int x;
        cout << "Enter data you want to Enqueue: " << endl;
        cin >> x;
        if (rear== 4)
        {
            cout << "Queue is FULL !" << endl;
        }
        else if (front==-1 && rear ==-1)
        {
            front=rear=0;
            queue[rear]=x;
        }
        else
        {
            rear++;
            queue[rear]=x;
        }
        
    }
    void dequeue()
    {
        int elem;
        if (front == -1 && rear==-1)
        {
            cout << "Queue is Empty! " << endl;
        }
        else if (front==rear)
        {
            front=rear=-1;
            cout<<"Queue is Empty! "<<endl; 
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        int i;
        if (front==-1 && rear==-1)
        {
            cout<<"Queue is Empty! "<<endl;
        }
        
        cout << "Data are: " << endl;
        for (i = front; i<rear+1; i++)
        {
            cout << queue[i] << endl;
        }
    }
};

int main()
{
    qu obj;
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