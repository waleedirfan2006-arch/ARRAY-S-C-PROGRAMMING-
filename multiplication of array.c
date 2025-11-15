#include <stdio.h>

int main() {
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int B[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int C[3][3];
    int i, j, k;

    // Multiply A (3x2) by B (2x3)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
        {
            C[i][j] = 0;
            for (k = 0; k < 2; k++)
             {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant 3x3 Matrix C:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}