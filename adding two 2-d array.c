#include<stdio.h>
#include<conio.h>
int main()
{
    int abc[4][2]={{1,2},{3,0},{2,6},{4,5}};
    int xyz[4][2]={{5,5},{7,10},{8,9},{10,11}};
    int c[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=abc[i][j]+xyz[i][j];
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}

// #include <stdio.h>
// int main()
// {int a[2][2]={{1,2},{3,4}},b[2][2]={{5,6},{7,8}},c[2][2];
// for(int i=0;i<2;i++)
// {for(int j=0;j<2;j++)
//     {c[i][j]=a[i][j]+b[i][j];
//         printf(" %d ",c[i][j]);
//     }
//     printf("\n");}}
