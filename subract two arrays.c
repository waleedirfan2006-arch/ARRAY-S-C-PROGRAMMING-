#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[2][2]={{8,3},{1,0}};
        int abc[2][2]={{6,5},{1,8}};
int xyz[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            xyz[i][j]=arr[i][j]-abc[i][j];
            printf(" %d",xyz[i][j]);
        }
        printf("\n");
    }
    return 0;
}