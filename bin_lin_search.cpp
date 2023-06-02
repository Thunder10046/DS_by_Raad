#include <bits/stdc++.h>
using namespace std;

class Arrays
{
private:
    int n, row, col, ele;
    int arr[1000];
    int sparse_mat[100][100];

public:
    void create()
    {
        cout << "Enter the range: " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void linear_search()
    {
        int key, found = 0;
        cout << "Enter the number you want to search :" << endl;
        cin >> key;
        for (int i = 0; i < n; i++)
        {
            if (key == arr[i])
            {
                found = 1;
                cout << "Found at Position : " << i << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "Not Found" << endl;
        }
    }
    void binary_search()
    {
        int key, found = 0;
        cout << "Enter the number you want to search :" << endl;
        cin >> key;
        sort(arr, arr + n);
        int s = 0, e = n - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == key)
            {
                found = 1;
                cout << "Found at Position : " << mid << endl;
                break;
            }
            else if (arr[mid] > key)
            {
                e = mid - 1;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
            }
        }
        if (!found)
        {
            cout << "Not Found" << endl;
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "" << arr[i] << endl;
        }
    }
    void create_sparsemat()
    {

        cout << "Enter how many rows you want to access: " << endl;
        cin >> row;
        cout << "Enter how many column you want to access: " << endl;
        cin >> col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> sparse_mat[i][j];
            }
        }
    }
    void display_sparsemat()
    {
        cout << "Row\tColumn\tElement" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (sparse_mat[i][j] != 0)
                {
                    cout << "" << i + 1;
                    cout << "\t" << j + 1;
                    cout << "\t" << sparse_mat[i][j];
                }
                cout << endl;
            }
        }
    }
};

int main()
{
    Arrays obj;
    int option;
    for (;;)
    {
        cout << "********Main Menu********" << endl;
        cout << "1. Create" << endl;
        cout << "2. Linear Search" << endl;
        cout << "3. Binary Search" << endl;
        cout << "4. Display" << endl;
        cout << "5. Create Sparse Matrix" << endl;
        cout << "6. Display Sparse Matrix" << endl;
        cout << "7. Exit" << endl;
        cout << "\tEnter Your Option[1-5]: " << endl;
        cin >> option;
        if (option == 7)
        {
            break;
        }
        switch (option)
        {
        case 1:
            obj.create();
            break;
        case 2:
            obj.linear_search();
            break;
        case 3:
            obj.binary_search();
            break;
        case 4:
            obj.display();
            break;
        case 5:
            obj.create_sparsemat();
            break;
        case 6:
            obj.display_sparsemat();
            break;
        }
    }
}