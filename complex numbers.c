#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);

    float real[n], imag[n];
    float sumReal = 0, sumImag = 0;

    // Input real and imaginary parts
    for (int i = 0; i < n; i++) {
        printf("Enter real part of complex number %d: ", i + 1);
        scanf("%f", &real[i]);
        printf("Enter the imaginary part of complex number%d: ", i + 1);
        scanf("%f", &imag[i]);
    }

    // Calculate sum of complex numbers
    for (int i = 0; i < n; i++) {
        sumReal += real[i];
        sumImag += imag[i];
    }

    // Calculate averages
    float avgReal = sumReal / n;
    float avgImag = sumImag / n;

    // Display results
    printf("\nSum of complex numbers = %.2f + %.2fi\n", sumReal, sumImag);
    printf("Average of real parts = %.2f\n", avgReal);
    printf("Average of imaginary parts = %.2f\n", avgImag);

    return 0;
}
