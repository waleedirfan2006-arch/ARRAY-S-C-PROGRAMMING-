#include <stdio.h>

int main() 
{
    float a[2][2], det, inv[2][2];
    int i, j;

    // Step 1: Input matrix elements
    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    // Step 2: Find determinant
    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    printf("\nDeterminant = %.2f\n", det);

    // Step 3: Check if inverse exists
    if(det == 0) {
        printf("Inverse not possible (Determinant is zero).\n");
        return 0;
    }

    // Step 4: Find inverse
    inv[0][0]= a[1][1] / det;
    inv[0][1]=-a[0][1] / det;
    inv[1][0]=-a[1][0] / det;
    inv[1][1]= a[0][0] / det;

    // Step 5: Display inverse
    printf("\nInverse of matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%.2f\t", inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}