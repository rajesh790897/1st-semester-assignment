#include <stdio.h>

int main() {
    printf("Assignment No: 19");
    int num1, num2, res;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    res = num1;

    printf("GCD of the two numbers is: %d\n", res);

    return 0;
}
