#include <stdio.h>

int main() {
    printf("Assignment No: 17");
    int n, factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
