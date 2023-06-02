#include <stdio.h>

void display(int array[][3])
{
    printf("Two Dimensional array elements:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int array[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for array[%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    display(array);

        return 0;
}