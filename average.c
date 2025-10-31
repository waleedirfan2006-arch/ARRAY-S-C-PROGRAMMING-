// program to find the average of all array elements 
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[6]={23,56,67,45,7,89},sum;
    for(int i=0;i<6;i++)
    {
        sum+=arr[i];

    }
    float avg=(float)sum/6;
    printf("the sum of all the elements is %d \n",sum);
    printf("the average of all the elements is %f ",(float)avg);

    return 0;
}
