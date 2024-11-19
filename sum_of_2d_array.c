#include <stdio.h>

int main() {
  // assignement 32
    int row, col, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Declare the 2D array with the specified dimensions
    int arr[row][col];

    // Read elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; // Calculate the sum while reading elements
        }
    }

    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;
}
