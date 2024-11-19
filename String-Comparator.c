#include <stdio.h>
#include <string.h>

int main() {
// assignment 45
    char str1[50], str2[50];

    printf("Enter 1st string: ");
    scanf("%s", str1);

    printf("Enter 2nd string: ");
    scanf("%s", str2);

    int res = strcmp(str1, str2);

    if (res == 0) {
        printf("The strings are same.\n");
    } else if (res > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The first string is smaller than the second string.\n");
    }

    return 0;
}
