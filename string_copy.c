#include <stdio.h>
#include <string.h>

int main() {
// assignment 42
    char mainStr[50], copyStr[50];

    printf("Enter a string: ");
    scanf("%s", mainStr);

    strcpy(copyStr, mainStr); // Copy mainStr to copyStr

    printf("The copied string is: %s\n", copyStr);

    return 0;
}
