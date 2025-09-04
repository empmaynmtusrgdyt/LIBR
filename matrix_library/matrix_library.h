#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int **createMatrix(int rows, int columns); 

void printMatrix(int **matrix, int rows, int columns);

void freeMatrix(int **matrix, int rows);

int **loadMatrix(string filename, int rows, int cols);

void printMatrix(string filename, int rows, int cols);

int **loadMatrixWithSize(string filename, int &rows, int &cols);