#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,i,j;
    printf("enter the number of rows and coloms ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            printf("enter the element at %d row and %d colom ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
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
