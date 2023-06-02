#include<bits/stdc++.h>
using namespace std;

int insertion(int ax[], int n)
{
    for (int i = n; i >=0; i--)
    {
        
        int temp=ax[i];
        int j=i-1;
        while (j>-1 && ax[j]>temp)
        {
            ax[j+1]=ax[j];
            j--;
        }
        ax[j+1] = temp;
        
    }

}

int main()
{
    int ax[7]={10,78,32,90,20,19,25}; 
    insertion(ax,7);
    cout<<"After Sorting: "<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<ax[i]<<endl;
    }
}