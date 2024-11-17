#include <stdio.h>

int main() {
    printf("Assignment No: 8");
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is: %.2f degrees Celsius.\n", celsius);

    return 0;
}
