#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter number of elements ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float avg=(float)sum/n;
     printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

