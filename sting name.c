// Write down a program which asks user to input his first name and last name
//  in a separate array. After taking the input your program should be able
//   to concatenate first name and last name and return it as full name.
//   Count down number of characters in the full name as well. For example:
// First name: Muhammad, Second name: Ahmed, Full name: Muhammad Ahmed
#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    strcpy(full, first);

    strcat(full, " ");

    strcat(full, last);

    int length = strlen(full);

    printf("\nFull name: %s", full);
    printf("\nNumber of characters: %d", length);

    return 0;
}
