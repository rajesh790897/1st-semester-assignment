#include <stdio.h>
#include <string.h>

int main() {
  // assignment 40
    char str[50];
    int len, i;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");
    return 0;
}
