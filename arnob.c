#include<stdio.h>


void input(int arr_2d[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", arr_2d[i][j]);
        }
        
    }
    
}

void display(int arr_2d[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr_2d[i][j]);
        }
        printf("\n");     
    }
    
}

int main()
{
    int r,c; 
    printf("Rows are 3 and so are coloms\n");
    int arr_2d[3][3];
    input(arr_2d);
    display(arr_2d);   
}