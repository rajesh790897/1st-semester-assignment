#include <stdio.h>
#include <string.h>

int main() {
  // assignment 38
    char fname[20], lname[20];

    printf("Enter your first name: ");
    scanf("%s", fname);

    printf("Enter your last name: ");
    scanf("%s", lname);

    strcat(fname, lname); // Concatenate lname to the end of fname

    printf("The concatenation is: %s\n", fname);

    return 0;
}
