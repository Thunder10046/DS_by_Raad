#include<iostream>
using namespace std;
 
int partition(int ax[], int lb, int ub)
{
    int pivot = ax[lb];
    int i = lb; //i= start, j = end 
    int j = ub;
    while (i<j)
    {
        while (ax[i]<=pivot)
        {
            i++;
        }
        while (ax[j]>=pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(ax[i],ax[j]);
        }
        
        
    }
    swap(ax[lb],ax[j]); 
    return j;
}

void QS(int ax[], int lb, int ub)
{
    while (lb<ub)
    {
        int loc = partition(ax,lb,ub);
        QS(ax,lb,loc-1);
        QS(ax,loc+1,ub);
    }
    
}

int main()
{
    int ax[7]={10,78,32,90,20,19,25}; 
    QS(ax,0,6);
    for (int i = 0; i < 7; i++)
    {
        cout<<ax[i]<<endl;
    }
    

}