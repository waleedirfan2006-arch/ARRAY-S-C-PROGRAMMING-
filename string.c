#include<stdio.h>
#include<conio.h>
int main()
{
    
    //necessary to enter size of all dimensions except first, or use pointer array - session 12 topic.
    const char contacts[][15] = { //2d array
        "Aisha Khan",
        "Bilal Ahmed",
        "Fatima Noor",
        "Zohaib Khan"
    };
    
    int n_contacts = sizeof(contacts) / sizeof(contacts[0]);

    puts("Contacts (read-only list):");
    for (int i = 0; i < n_contacts; i++) {  //discuss ++i here
        printf(" %d) %s\n", i + 1, contacts[i]);
    }
}
