// Write a C program to read elements in a matrix and check whether
//  matrix is Sparse matrix or not. Logic: To check whether a matrix
// is sparse matrix we only need to check the total number 
// of elements that are equal to zero. The matrix is sparse matrix
//  if T ≥ ((m * n) / 2 ) where T defines total number of zero elements
// where m and n are rows and columns respectively.
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n;
    printf("enter the number of rows and coloms ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the element at %d row and %d colom ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }   
    if(count>=((m*n)/2))
    {
        printf("the matrix is sparse matrix");
    }
    else
    {
        printf("the matrix is not a sparse matrix");
    }
    return 0;
}
