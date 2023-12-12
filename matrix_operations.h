#ifndef MATRIX_OPERATIONS_H_INCLUDED
#define MATRIX_OPERATIONS_H_INCLUDED

// Function to add two matrices
void matrixAddition(int **mat1, int **mat2, int **result, int rows, int cols);

// Function to multiply two matrices
void matrixMultiplication(int **mat1, int **mat2, int **result, int rows1, int cols1, int rows2, int cols2);

// Function to transpose a matrix
void matrixTranspose(int **mat, int **result, int rows, int cols);

// Function to calculate the determinant of a square matrix
int matrixDeterminant(int **mat, int n);

// Function to display a matrix
void displayMatrix(int **mat, int rows, int cols);

#endif // MATRIX_OPERATIONS_H_INCLUDED
