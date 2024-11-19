#include <stdio.h>
#include <string.h>

int main() {
// assignment 37
    char str[100];

    printf("Enter your name: ");
    scanf("%s", str);

    int len = strlen(str);

    // Reverse the string using a loop
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed your name: %s\n", str);

    return 0;
}
