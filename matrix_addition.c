#include <stdio.h>

int main() {
  // assignment 34
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Declare the 2D arrays with the specified dimensions
    int matrix1[row][col], matrix2[row][col], result[row][col];

    // Read elements of matrix 1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read elements of matrix 2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the corresponding elements of the matrices and store the result
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("\nResult of matrix addition is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
