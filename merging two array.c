#include <stdio.h>
int main()
{
    int a[]={1,2,3},b[]={4,5,6},c[6];

    for(int i=0;i<3;i++)
    {
    c[i]=a[i];
    }
    for(int i=0;i<3;i++)
    {
        c[i+3]=b[i];
    }
    for(int i=0;i<6;i++)
    {
        printf("%d  ",c[i]);
    }


}
// #include <stdio.h>
// int main()

// {int a[]={1,2,3},b[]={4,5,6},c[6];
// for(int i=0;i<3;i++)
// c[i]=a[i];
// for(int i=0;i<3;i++)
// c[i+3]=b[i];
// for(int i=0;i<6;i++)
// printf("%d ",c[i]);
// }
