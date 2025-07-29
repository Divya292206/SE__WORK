//Write a program to make multiplication of 2-D Matrix

#include <iostream>
using namespace std;

// Function to input matrix from user
void inputMatrix(int matrix[10][10], int rows, int cols) {
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display matrix in proper format
void displayMatrix(int matrix[10][10], int rows, int cols) {
    cout << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[10][10], int mat2[10][10], int result[10][10], int r1, int c1, int c2) {
    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "--------- Matrix Multiplication ---------\n";

    // Input for first matrix
    cout << "\nEnter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    inputMatrix(mat1, r1, c1);

    cout << "\nMatrix 1:";
    displayMatrix(mat1, r1, c1);

    // Input for second matrix
    cout << "\nEnter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    // Check multiplication condition
    if (c1 != r2) {
        cout << "\nMatrix multiplication not possible. Columns of Matrix 1 must equal Rows of Matrix 2.\n";
        return 0;
    }

    inputMatrix(mat2, r2, c2);

    cout << "\nMatrix 2:";
    displayMatrix(mat2, r2, c2);

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, c2);

    // Display result
    cout << "\nResultant Matrix after Multiplication:";
    displayMatrix(result, r1, c2);

    return 0;
}

