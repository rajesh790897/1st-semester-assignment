#include <stdio.h>
#include <string.h>

int main() {
  // assignment 44
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    // Convert the string to uppercase using a loop
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
