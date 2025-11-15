#include<stdio.h>
#include<conio.h>
int main()
{
int marks[10],a;

for (a=0;a<10;a++)
{
    printf("enter the marks of student %d: ",a+1);
    scanf("%d",& marks[a]);
}
for (a=0;a<=9;a++)
{
    printf("\nmarks of student %d is %d",a+1,marks[a]);
    if(marks[a]<33)
    {
        printf("\tthis student has failed");
    }
    else
    {
        printf("\tthis student has passed");
    }
}
    return 0;
}