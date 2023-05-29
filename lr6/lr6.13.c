#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double** createMatrix(int rows, int columns) {
    double **A;
    A = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i ++) 
        A[i] = (double *)malloc(columns * sizeof(double));
    return A;
}

void freeMatrix(int rows, double **A) {
    for (int i = 0; i < rows; i++)
        free(A[i]);
    free(A);
} 

void fillMatrix(int rows, int columns, double **A) {
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < columns; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
}

void printMatrix(int rows, int columns, double **A) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) 
            printf("%d   ", A[i][j]);
        printf("\n");
    }
} 

int main(void) {
    char *locale=setlocale(LC_ALL, "");
    printf("¬ведите размерность матрицы\n");
    int n, m;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    double **B = createMatrix(m, n);
    fillMatrix(m, n, B);
    printMatrix(m, n, B);
    freeMatrix(m, B);
    return 0;
}