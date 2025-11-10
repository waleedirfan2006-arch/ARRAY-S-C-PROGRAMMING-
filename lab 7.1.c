
 #include <stdio.h>

 int main() {
     int n,i, sum = 0;
     float avg;

    printf("Enter the total numbers: ");
     scanf("%d", &n);

     int arr[n];

     for (i = 0; i < n; i++) {
         printf("Enter number %d: ", i + 1);
         scanf("%d", &arr[i]);

         if (arr[i] > 0) {
             sum += arr[i];
        }
    }

    avg = (float)sum / n;

    printf("\nThe sum of all positive numbers = %d", sum);
    printf("\nThe average = %.2f", avg);
    return 0;
 }
