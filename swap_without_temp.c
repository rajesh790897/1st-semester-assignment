#include <stdio.h>

int main() {
    printf("Assignment No: 7");
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
