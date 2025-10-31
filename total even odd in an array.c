#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={23,67,66,90,56},even=0,odd=0;
    for(int i=0;i<5;i++)
    {
    
        if (arr[i]%2==0)
        {
            even++;
        }   
        else 
        {
            odd++;
        }
        


    }
    printf("total even numbers are %d and total odd numbers are %d",even,odd);

    return 0;
}