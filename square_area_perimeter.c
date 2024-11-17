#include <stdio.h>

int main() {
    printf("Assignment No: 4");

    float side, area, perimeter;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("Area of the square: %.2f square units\n", area);
    printf("Perimeter of the square: %.2f units\n", perimeter);

    return 0;
}
