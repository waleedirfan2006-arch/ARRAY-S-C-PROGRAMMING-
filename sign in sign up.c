#include <stdio.h>
#include <string.h>

int main() {
    char emails[5][50] = {
        "ghufran@gmail.com",
        "aina@gmail.com",
        "Saif@gmail.com"
    };
    char passwords[5][50] = {
        "Hello12345",
        "0nepieceisreal",
        "xyz987654321"
    };
    int user_count = 3;
    int choice;

    while (1) {
        printf("\nWelcome to the Login System\n");
        printf("1. Sign In\n2. Sign Up\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Sign In
            char email[50], password[50];
            int found = 0;

            printf("Enter email: ");
            scanf("%s", email);

            printf("Enter password: ");
            scanf("%s", password);

            for (int i = 0; i < user_count; i++) {
                if (strcmp(email, emails[i]) == 0 && strcmp(password, passwords[i]) == 0) {
                    found = 1;
                    break;
                }
            }

            if (found)
                printf("Sign in successful!\n");
            else
                printf("Invalid email or password.\n");

        } else if (choice == 2) {
            // Sign Up
            if (user_count == 5) {
                printf("User limit reached. Cannot register more users.\n");
                continue;
            }
            char new_email[50], new_password[50];
            int exists = 0;

            printf("Enter new email: ");
            scanf("%s", new_email);

            for (int i = 0; i < user_count; i++) {
                if (strcmp(new_email, emails[i]) == 0) {
                    exists = 1;
                    break;
                }
            }
            if (exists) {
                printf("Email already exists!\n");
                continue;
            }

            printf("Enter new password: ");
            scanf("%s", new_password);

            int len = strlen(new_password);
            int has_letter = 0, has_digit = 0;
            for (int j = 0; j < len; j++) {
                // Check for letter (A-Z or a-z)
                if ((new_password[j] >= 'a' && new_password[j] <= 'z') ||
                    (new_password[j] >= 'A' && new_password[j] <= 'Z')) {
                    has_letter = 1;
                }
                // Check for digit (0-9)
                if (new_password[j] >= '0' && new_password[j] <= '9') {
                    has_digit = 1;
                }
            }

            if (len < 8 || !has_letter || !has_digit) {
                printf("Password must be at least 8 characters long and alphanumeric!\n");
                continue;
            }

            // All checks passed: add user
            strcpy(emails[user_count], new_email);
            strcpy(passwords[user_count], new_password);
            user_count++;
            printf("Account created successfully! Please sign in now.\n");

        } else if (choice == 0) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
