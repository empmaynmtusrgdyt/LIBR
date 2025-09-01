#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

int **createMatrix(int rows, int columns); 

void printMatrix(int **matrix, int rows, int columns);

void freeMatrix(int **matrix, int rows);