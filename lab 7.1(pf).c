// 1. Write a program that reads the numbers from user
//  and store these numbers into an array of same size. 
//  Find and display the sum of all positive numbers
//  and calculate the average.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum = 0;
    float avg;
    printf("enter the total numbers :");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        printf("\nenter %d number",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
        sum+=arr[i];
    }

    }
avg=(float)sum/n;
printf("the sum of all values is %d",sum);
printf("\n the average of all numbers is %f",(float)avg);
    return 0;
}
// #include <stdio.h>

// int main() {
//     int n, sum = 0
//     float avg;

//     printf("Enter the total numbers: ");
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);

//         if (arr[i] > 0) {
//             sum += arr[i];
//         }
//     }

//     avg = (float)sum / n;

//     printf("\nThe sum of all positive numbers = %d", sum);
//     printf("\nThe average = %.2f", avg);

//     return 0;
// }
