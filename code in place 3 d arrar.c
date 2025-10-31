#include <stdio.h>

int main()
 {
    float marks[5][4][3];
    int s, sub, t, n;
    float sum, termAvg, total, overall[5];
    int bestTerm[5], top = 0;

    printf("Enter number of students (max 5): ");
    scanf("%d", &n);

    for (s = 0; s < n; s++) {
        printf("\nEnter marks for Student %d:\n", s + 1);
        for (sub = 0; sub < 4; sub++)
            for (t = 0; t < 3; t++) {
                printf("Subject %d Term %d: ", sub + 1, t + 1);
                scanf("%f", &marks[s][sub][t]);
            }
    }

    for (s = 0; s < n; s++) {
        total = 0;
        bestTerm[s] = 0;
        printf("\nAverages for Student %d:\n", s + 1);
        for (t = 0; t < 3; t++) {
            sum = 0;
            for (sub = 0; sub < 4; sub++)
                sum += marks[s][sub][t];
            termAvg = sum / 4;
            printf(" Term %d avg: %.2f\n", t + 1, termAvg);
            total += termAvg;
            if (termAvg > marks[s][0][bestTerm[s]]) bestTerm[s] = t;
        }
        overall[s] = total / 3;
        printf(" Overall avg: %.2f\n", overall[s]);
    }

    for (s = 1; s < n; s++)
        if (overall[s] > overall[top])
            top = s;

    printf("\nTop Student: %d\n", top + 1);
    printf("Best Term: %d\n", bestTerm[top] + 1);
    printf("Overall Average: %.2f\n", overall[top]);

    return 0;
}
