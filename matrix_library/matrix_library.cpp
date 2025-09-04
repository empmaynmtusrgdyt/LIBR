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

int **loadMatrix(string filename, int rows, int cols) {
    ifstream file(filename);

    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return nullptr; 
    }

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]{};
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(file >> matrix[i][j])) break;
        }
    }
    file.close();
    return matrix;
}

void printMatrix(int**matrix, string filename, int rows, int cols){
    ofstream file(filename);
    if (!file) { // Проверяем, открылся ли файл
        cout << "Ошибка открытия файла!" << endl;
        return; //
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            file << setw(3) << matrix[i][j];
        }
        file << endl;
    }

    file.close();
}

int **loadMatrixWithSize(string filename, int &rows, int &cols){
    ifstream file(filename);

    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return nullptr;
    }

    if (!(file >> rows >> cols)) {
        cout << "Ошибка считывания размеров матрицы!" << endl;
        return nullptr;
    }

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]{};
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (!(file >> matrix[i][j])) break;
        }
    }

    return matrix;
}