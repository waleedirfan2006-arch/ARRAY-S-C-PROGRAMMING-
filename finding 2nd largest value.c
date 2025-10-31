// 10. Write a program to find the second largest element in an array.
#include <stdio.h>
int main()
{
    int a[]={56,17,34,94,48},n=5;int max=a[0],second=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            second=max;max=a[i];
        }
        else if
        (a[i]>second&&a[i]<max)
        second=a[i];
    }
    printf("Second largest=%d",second);
}
