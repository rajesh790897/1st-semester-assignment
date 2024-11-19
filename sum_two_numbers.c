#include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
// assignment 46
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = findSum(num1, num2);

    printf("The sum of two numbers is: %d\n", sum);

    return 0;
}
