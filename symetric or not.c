#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    // Input matrix size
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], transpose[n][n];

    // Input elements of matrix
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = a[j][i];
        }
    }
       // Check if original and transpose are equal
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != transpose[i][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    // Display result
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (flag == 1)
        printf("\nMatrix is symmetric.\n");
    else
        printf("\nMatrix is asymmetric.\n");

    return 0;
}
