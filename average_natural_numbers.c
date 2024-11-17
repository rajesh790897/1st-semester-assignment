#include <stdio.h>

int main() {
    printf("Assignment No: 16");
    int sum = 0, n = 10;
    int i;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    float avg = sum / (float)n;
    printf("The average of the first %d natural numbers is: %.2f\n", n, avg);

    return 0;
}
