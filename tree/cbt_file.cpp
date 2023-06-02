#include <iostream>
#include <fstream>
using namespace std;
struct Node
{
    struct Node *ll;
    int d;
    struct Node *rl;
};

    Node *ax[50]; // ax is the array of pointers which stores the address of the nodes which is created in the upcoming statements. 

    Node *h; // h indicates the root address of the tree

int main()
{
    ifstream file; //ifstream is the class, file is an object
    file.open("file.txt"); // open is a method
    int n, x, i, j, ll[50], data[50], rl[50]; // initializing ll, data and rl array which stores the value (int) by reading from the file
    
    i = 1;
    while (file >> ll[i])
    {
        file >> data[i];
        file >> rl[i];
        i++;
    }

    n = i - 1;

    cout<<"Elements read from the file are: "<<endl;
    
    for (j = 1; j <= n; j++)
    {
        cout << ll[j] << " " << data[j] << " " << rl[j] << endl; // prints all the elements accordingly by the file.
    }

    file.close(); //Now datas that are read, stored in respective arrays.  

    cout<<endl<<endl<<"After creating the new nodes, the addresses are accordingly: "<<endl;
    for (i = 1; i <= n; i++)
    {
        ax[i] = new Node();
        cout << i << " " << ax[i] << endl;
    }

    h = ax[1]; //assigning the first address as the root address;
    cout<<ax[0]<<endl;  //assigning the first value of the pointer array because look at the immidiate for loop, the loop starts from 1. 
    cout << endl<<"Root address: " << h << endl;
    for (i = 1; i <= n; i++)
    {
        ax[i]->d = data[i]; //assigning data to the data of node class. 
        ax[i]->ll = ax[ll[i]];  
        ax[i]->rl = ax[rl[i]];
    }
    for (i = 1; i <= n; i++)
    {
        cout << ax[i]->ll << " " << char(ax[i]->d) << " " << ax[i]->rl << endl;
    }
}
