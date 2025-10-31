// Write a program which takes a matrix of any size as user input and
//  returns the maximum element of matrix as output. Your code should also 
//  show the entered matrix on the screen.
#include <stdio.h>

int main()
 {
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int max = a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }

    printf("\nMaximum element in the matrix is: %d\n", max);

    return 0;
}
