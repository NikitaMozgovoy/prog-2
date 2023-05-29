#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
void fillMatrix(int n, int m, double **_A) {
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%lf", &_A[i][j]);
        }
}
void freeMatrix(int n, double **_A) {
    for (int i = 0; i < n; i++)
        free(_A[i]);
    free(_A);
} 
double** createMatrix(int n, int m) {
    double **_A;
    _A = (double **)malloc(m * sizeof(double *));
    for (int i = 0; i < n; i ++) 
        _A[i] = (double *)malloc(m * sizeof(double));
    return _A;
}
void multVector(int n, int m, int t, double **_A, double *vector) {
    double *result;
    result = (double *) calloc(t, sizeof(double));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            result[i] += vector[j] * _A[i][j];
        printf("[%d] = %lf\t", i, result[i]);
    }
    free(result);
}
void multMatrix(int n, int m, int k, double **_A1, double **_A2) {
    double **result;
    result = createMatrix(n, m);
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < m; j++) {
            result[i][j] = 0;
            for (int r = 0; r < k; r++)
                result[i][j] += _A1[i][r] * _A2[r][j];
            printf("[%d][%d] = %lf\t", i, j, result[i][j]);
        }
        }
    freeMatrix(n, result);
}
int main(void) {
    char *locale=setlocale(LC_ALL, "");
    double** matrix1;
    int m1, n1, choise;
    printf("Введите размерность первой матрицы\nn = ");
    scanf("%d", &n1);
    printf("m = ");
    scanf("%d", &m1);
    matrix1 = createMatrix(n1,m1);
    fillMatrix(n1, m1, matrix1);
    printf("Что вы хотите сделать?\n"
    "1 - умножить матрицу на вектор-столбец\n"
    "2 - умножить матрицу на матрицу\n"
    "Введите 1 или 2\n");
    scanf("%d", &choise);
    if (choise == 1) {
        double *vector;
        int n;
        printf("Введите размер вектор-столбца:\nn = ");
        scanf("%d", &n);
        if (m1 != n) {
            printf("Умножение невозможно!");
            return 1;
        }
        vector = (double *) malloc(n * sizeof(double));
        for (int i = 0; i < n; i++) {
            printf("[%d][0] = ", i);
            scanf("%lf", &vector[i]);
        }
        multVector(n1, m1, n, matrix1, vector);
        free(vector);
    }
    else if (choise == 2) {
        double **matrix2;               
        int n2, m2;
        printf("Введите размерность второй матрицы:\nn = ");
        scanf("%d", &n2);
        printf("m = ");
        scanf("%d", &m2);
        if (m1 != n2) {
            printf("Умножение невозможно!");
            return 1;
        }
        matrix2 = createMatrix(n2, m2);
        fillMatrix(n2, m2, matrix2);
        multMatrix(n1, m2, n2, matrix1, matrix2);
        freeMatrix(n2, matrix2);    
    }

    freeMatrix(n1, matrix1); 
  return 0;
}

