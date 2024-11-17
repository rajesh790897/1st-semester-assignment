#include <stdio.h>

int main() {
    printf("Assignment No: 15");
    int Sub1 = 70, Sub2 = 80, Sub3 = 91, Sub4 = 51;
    int avg = (Sub1 + Sub2 + Sub3 + Sub4) / 4;

    if (avg >= 90) {
        printf("Grade A\n");
    } else if (avg >= 80) {
        printf("Grade B\n");
    } else if (avg >= 70) {
        printf("Grade C\n");
    } else if (avg >= 60) {
        printf("Grade D\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
