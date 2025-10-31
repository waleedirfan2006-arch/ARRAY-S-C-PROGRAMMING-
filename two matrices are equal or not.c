#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[3][3] = {{1, -2, 3}, {-4, 5, -6}, {7, -8, 9}};
    int arr2[3][3] = {{1, -2, 3}, {-4, 5, -6}, {7, -8, 9}};
    int isEqual = 1; // Assume matrices are equal initially
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] != arr2[i][j])
            {
                isEqual = 0; // If any element is not equal, set flag to false
                break; // No need to check further
            }
        }
       
    }
    if(isEqual==1)
    {
        printf("The two matrices are equal.\n");
    }
    else
    {
        printf("The two matrices are not equal.\n");
    }

    return 0;
}