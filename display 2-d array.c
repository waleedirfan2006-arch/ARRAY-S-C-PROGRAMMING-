#include<stdio.h>
#include<conio.h>
int main()
{
    int ary[2][3]={{10,20,30},{40,50,60}};
    int arr[2][3]={{1,2,3},{4,5,6}};
    int i,j;
     printf("the array number 1 is:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     printf("the array number 2 is:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",ary[i][j]);

        }
        printf("\n");
    }
}