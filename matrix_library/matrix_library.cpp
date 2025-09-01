#include "matrix_library.h"


int **createMatrix(int rows, int columns) {
    int **matrix = new int *[rows]; 
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[columns]; 
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

void printMatrix(int **matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; 
    }
    delete[] matrix; 
}