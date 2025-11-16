
#include <stdio.h>
int main()
{
    int a[]={3,5,7,2,9},key=9,f=0,i;
for( i=0;i<5;i++)
{
    if(a[i]==key)
    {
        f=1;
        break;
    }
}
if(f=1)
printf("Found at index %d",i);
else printf("Not found");
}











// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int arr[5]={34,6,7,234,32};
//     int key=7;
// for(int i=0;i<5;i++)
// {
//     if(arr[i]==key)
//     {
//         printf("the key found at index %d",i);
//         break;
// }
//   else
//     {
//     printf("not found ");
//     }
  

// }

//     return 0;
// }