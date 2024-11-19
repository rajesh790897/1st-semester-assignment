#include <stdio.h>
#include <string.h>

int main() {
  // assignment 39
    char str1[20], str2[20];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are same.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
