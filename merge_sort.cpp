#include <bits/stdc++.h>
using namespace std;

void merge(int ax[], int lb, int mid, int ub)
{
    int i, j, k;
    i = lb;
    j = mid + 1;
    k = lb;
    int bx[7];
    while (i <= mid && j <= ub)
    {
        if (ax[i] <= ax[j])
        {
            bx[k] = ax[i];
            i++;
            k++;
        }
        else
        {
            bx[k] = ax[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            bx[k] = ax[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            bx[k] = ax[i];
            i++;
            k++;
        }
    }
    for (int k = lb; k <= ub; k++)
    {
        ax[k] = bx[k];
    }
}

void merge_sort(int ax[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        merge_sort(ax, lb, mid);
        merge_sort(ax, mid + 1, ub);
        merge(ax, lb, mid, ub);
    }
}
int main()
{
    int ax[7] = {10, 78, 32, 90, 20, 19, 25};
    merge_sort(ax, 0, 6);
    cout << "Array after Sorting: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << ax[i] << endl;
    }
}