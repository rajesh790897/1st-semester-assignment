#include <stdio.h>

int main() {
// Assignment: 31
    int row, col;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    // Declare the 2D array with the specified dimensions
    int arr[row][col];

    // Read elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
