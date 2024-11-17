#include <stdio.h>

int main() {
    printf("Assignment No: 3");
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);

    return 0;
}
