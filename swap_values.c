#include <stdio.h>

int main() {
    printf("Assignment No: 6");
    int x, y, temp;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
