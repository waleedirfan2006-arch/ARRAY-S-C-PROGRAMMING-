#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[2][2]={{1, 2}, {3, 4}},
        row_sum[2] = {0, 0}, 
        col_sum[2] = {0, 0};    
    // Calculate sum of each row
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            row_sum[i] += arr[i][j];
        }
    }   
    // Calculate sum of each column
    for(int j = 0; j < 2; j++)
    {
        for(int i = 0; i < 2; i++)
        {
            col_sum[j] += arr[i][j];
        }
    }
    // Print the results
    printf("Sum of each row:\n");
    for(int i = 0; i < 2; i++)
    {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }
    printf("Sum of each column:\n");
    for(int j = 0; j < 2; j++)
    {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }
    
    return 0;
}