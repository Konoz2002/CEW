#include "matrix_operations.h"
#include <stdio.h>
#include <stdlib.h>

void matrixAddition(int **mat1, int **mat2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixMultiplication(int **mat1, int **mat2, int **result, int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied: Incompatible dimensions.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void matrixTranspose(int **mat, int **result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int matrixDeterminant(int **mat, int n) {
    // Function to calculate determinant of a square matrix (recursive implementation)
    // Add your implementation for determinant calculation here
    // This is just a placeholder implementation
    return 0;
}

void displayMatrix(int **mat, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
