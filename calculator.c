#include <stdio.h>

int main() {
    printf("Assignment No: 2");
    int num1, num2, sum, sub, mul, mod;
    float div;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("Sum is: %d\n", sum);
    printf("Subtraction is: %d\n", sub);
    printf("Multiplication is: %d\n", mul);
    printf("Division is: %f\n", div);
    printf("Modulus is: %d\n", mod);

    return 0;
}
