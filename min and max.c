#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={90,56,64,23,65};
    int max=arr[0];
    int min=arr[1];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
            printf("THE MIN VALUE IS =%d AND MAX VALUE IS  =%d",min,max);

    
    return 0;
}