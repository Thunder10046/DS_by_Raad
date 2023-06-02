#include <bits/stdc++.h>
using namespace std;
// Selection Sort

int selection(int ax[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = 0;
            if (ax[i] < ax[j])
            {
                continue;
            }
            else
            {
                temp = ax[i];
                ax[i] = ax[j];
                ax[j] = temp;
            }
        }
    }
    cout << "Sorted Elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ax[i] << endl;
    }
}

int main()
{
    int ax[7] = {10, 78, 32, 90, 20, 19, 25};
    selection(ax, 7);
}