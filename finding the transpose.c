#include<stdio.h>
#include<conio.h>
int main()
{
    int abc[2][6]={{10,20,40,60,80,60},{30,40,10,10,20,30}};
    printf("The transpose of the given matrix is:\n");

for(int i=0;i<6;i++)
{
    for(int j=0;j<2;j++)
    {
        printf("%d ",abc[j][i]);
    }
    printf("\n");
}
}

// #include <stdio.h>
// int main()
// {int a[2][3]={{1,2,3},{4,5,6}};
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<2;j++)
//     printf("%d ",a[j][i]);
//     printf("\n");
// }
// }