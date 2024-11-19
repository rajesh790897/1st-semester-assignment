#include <stdio.h>
#include <string.h>

int main() {
  // assignment 41
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("The string length is: %d\n", len);

    return 0;
}
