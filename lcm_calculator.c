#include <stdio.h>

int main() {
    int num1, num2, max, res;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    for (res = max; ; res++) {
        if (res % num1 == 0 && res % num2 == 0) {
            printf("LCM of %d and %d is: %d\n", num1, num2, res);
            break;
        }
    }

    return 0;
}
