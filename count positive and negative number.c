#include<stdio.h>
#include<conio.h>
int main()
{
    int abc[2][2];
    printf("Enter 4 elements for the 2D array (2x2):\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d", &abc[i][j]);
        }
    }  

    int positive = 0, negative = 0, zero = 0; 
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(abc[i][j] > 0)
            {
                positive++;
            }
            else if(abc[i][j] < 0)
            {
                negative++;
            }
            else if (abc[i][j] == 0)
            {
                zero++;
            }
        }
    }
    printf("Positive Count: %d\n", positive);
    printf("Negative Count: %d\n", negative);
    printf("Zero Count: %d\n", zero);
    return 0;
}