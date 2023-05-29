#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int** createMatrix(int rows, int columns) {
    int **A = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i ++) 
        A[i] = (int *)malloc(columns * sizeof(int));
    return A;
}

void freeMatrix(int rows, int **A) {
    for (int i = 0; i < rows; i++)
        free(A[i]);
    free(A);
} 

void fillMatrix(int rows, int columns, int **A) {
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < columns; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
}

void prodVect(int **A, int **Q, int *C, int k, int l, int n){
    int i,j;
    int B;
    if (l>0){
        B = 0;
        for (j=0;j<n;j++)
            B += Q[j][l-1]*A[j][k];
        for(i=0;i<n;i++)
            C[i] +=  B*Q[i][l-1];
        prodVect(A,Q,C,k,l-1,n);
    }
}

int lengthVect(int **Q, int k,int n){
   int lengthV = 0;
    for (int i=0;i<n;i++)
        lengthV+= Q[i][k]*Q[i][k];
    lengthV = sqrt(lengthV);
    return lengthV;
}

void GrammSchmidt (int **A, int **Q, int *C, int n){
   int i,j,k;
   int len;
    for (j=0; j<n;j++){
        prodVect(A,Q,C, j, j, n);
        for(i=0;i<n;i++)
            Q[i][j] =A[i][j]-C[i];
        len = lengthVect(Q,j,n);
        for (k=0;k<n;k++){
        C[k] = 0;
        Q[k][j] /=len;
        printf("%d ", Q[k][j]);
    }
    printf("\n");
    }
}

int main(void){
    char *locale=setlocale(LC_ALL,"");
    int n;
    int **A, **Q;
    int *C  = (int*)calloc(n, sizeof(int));
    printf("Введите размерность квадратной матрицы:\n");
    scanf("%d", &n);
    A = createMatrix(n,n);
    Q = createMatrix(n,n);
    fillMatrix(n,n,A);
    printf("Полученная матрица: \n");
    GrammSchmidt (A,Q,C,n);
    freeMatrix(n,A);
    freeMatrix(n,A);
    return 0;
}