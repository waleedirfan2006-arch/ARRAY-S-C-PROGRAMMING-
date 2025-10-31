

#include <stdio.h>

int main() {
    int abc[3][2] = {{10,20},{30,40},{50,60}};
    int xyz[2][2] = {{5,4},{3,2}};
    int c[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c[i][j] += abc[i][k] * xyz[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
