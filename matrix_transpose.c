#include <stdio.h>

int main() {
  // assignment 33
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Declare the 2D array with the specified dimensions
    int matrix[row][col];

    // Read elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe transpose of the matrix is:\n");
    for (int i = 0; i < col; i++) { // Iterate over columns of the original matrix
        for (int j = 0; j < row; j++) { // Iterate over rows of the original matrix
            printf("%d ", matrix[j][i]); // Print the element at (j, i) which is the transpose of (i, j)
        }
        printf("\n");
    }

    return 0;
}
