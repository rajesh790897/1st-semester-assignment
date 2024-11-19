#include <stdio.h>

int main() {
  // assignment 36
    char str[50];
    int len = 0;

    printf("Enter your name: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("The length of your name is: %d\n", len);

    return 0;
}
