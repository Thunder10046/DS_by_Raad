#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *ll; 
    int data; 
    node *rl; 
};

node *ax[50]; 
node *h, *p;  

int main()
{
    ifstream file;
    int ll[50];
    int data[50];
    int rl[50];
    file.open("mytext.txt");
    int i = 1;
    while (file >> ll[i])
    {
        file >> data[i];
        file >> rl[i];
        i++; 
    }

    int n = i - 1;

    cout << endl<<"After Reading the data from the file: " << endl;

    for (i = 1; i <= n; i++)
    {
        cout << ll[i] << " " << char(data[i]) << " " << rl[i] << endl; // to output the reading from the file
    }
    for (int i = 1; i <= n; i++)
    {
        ax[i] = new node(); 
    }

    cout << "After Assigning new nodes for each data, the nodes look like along with their address:" << endl<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout << "Node : " << char(i + 64) << " " << ax[i] << endl; 
    }

    ax[0] = 0;
    h = ax[1];

    for (int i = 1; i <= n; i++)
    {
        ax[i]->data = data[i];
        ax[i]->ll = ax[ll[i]];
        ax[i]->rl = ax[rl[i]];
    }
    cout
        << endl<<"The Tree is: " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << ax[i]->ll << " " << char(ax[i]->data) << " " << ax[i]->rl << endl;
    }
}