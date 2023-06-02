#include <bits/stdc++.h>
using namespace std;

class final
{

public:
    int ax[100], s[100], q[100];
    int top = -1;
    int rear, front;
    void create_array()
    {
        for (int i42 = 0; i42 < 10; i42++)
        {
            cin >> ax[i42];
        }
    }
    void display()
    {
        for (int i42 = 0; i42 < 10; i42++)
        {
            cout << ax[i42] << endl;
        }
    }

    void transfer_to_stack()
    {
        for (int i42 = 0; i42 < 10; i42++)
        {
            top = top + 1;
            int x = ax[i42];
            s[top] = x;
        }
    }

    void transfer_odd()
    {
        while (top >= 0)
        {
            int x = s[top];
            top--;
            if (x % 2)
            {
                if (rear + 1 == front)
                {
                    continue;
                }
                else
                {
                    rear++;
                    q[rear] = x;
                }
            }
        }
        for (int i42 = 0; i42 < 5; i42++)
        {
            cout << q[i42] << endl;
        }
    }
};

int main()
{
    final a;
    a.create_array();
    a.display();
    cout << "After Transfering to stack: " << endl;
    a.transfer_to_stack();
    a.display();
    cout << "After Transfering the odds: " << endl;
    a.transfer_odd();
}