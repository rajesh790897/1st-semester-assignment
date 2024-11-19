#include <stdio.h>
#include <string.h>

int main() {
// assignment 43
    char str1[50], str2[50];

    printf("Enter your first name: ");
    scanf("%s", str1);

    printf("Enter your last name: ");
    scanf("%s", str2);

    strcat(str1, " "); // Add a space after the first name
    strcat(str1, str2); // Concatenate the last name

    printf("Concatenated: %s\n", str1);

    return 0;
}
