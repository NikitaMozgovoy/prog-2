#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
 
int main() {
    char *locale=setlocale(LC_ALL, "");
    int n, m, *b, *a, **matrix, n_rows;
    printf("¬ведите размер вектора a\n");
    scanf("%d", &n_rows);
    a = (int *) malloc(n_rows * sizeof(int));
    for (int j = 0; j < n_rows; j++) {
        printf("a[0][%d] = ", j);
        scanf("%d", &a[j]);
    }
    printf("¬ведите размерность матрицы \n");
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    if (m != n_rows) {
        printf("”множение невозможно");
        return 1;
    }
   
    matrix = (int **) malloc(n * sizeof(int *));
 
    for (int i = 0; i < n; i++)
        matrix[i] = (int *) malloc(m * sizeof(int));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
 
    b = (int *) calloc(n, sizeof(int));
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            b[i] += a[j] * matrix[i][j];
        printf("b[%d] = %d\n", i, b[i]);
    }
    free(b);
    free(a);
    for (int i = 0; i < n; i++) 
        free(matrix[i]);
    free(matrix);
    
    return 0;
}
