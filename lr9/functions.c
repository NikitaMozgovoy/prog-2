#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "main.h"
int local(){
char *locale=setlocale(LC_ALL, "");}
int** createDDMatrix(int rows, int columns) {
    int **A;
    A = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i ++) 
        A[i] = (int *)malloc(columns * sizeof(int));
    return A;
}

void freeDDMatrix(int rows, int **A) {
    for (int i = 0; i < rows; i++)
        free(A[i]);
    free(A);
} 

void fillDDMatrix(int rows, int columns, int **A) {
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < columns; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
}

void printDDMatrix(int rows, int columns, int **A) {
    printf("Полученная матрица:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) 
            printf("[%d][%d] = %d\t",i,j, A[i][j]);
        printf("\n");
    }
} 

void multDDMatrix(int rows, int columns, int k, int **A, int **B) {
    int **result = createDDMatrix(rows, columns);
    printf("Результат умножения:");
    for (int i = 0; i < rows; i++){
        printf("\n");
        for (int j = 0; j < columns; j++) {
            result[i][j] = 0;
            for (int r = 0; r < k; r++)
                result[i][j] += A[i][r] * B[r][j];
            printf("[%d][%d] = %d\t", i, j, result[i][j]);
        }
    }
    freeDDMatrix(rows, result);
}

int* createMatrix(int n){
    int *A = (int *)malloc(n * sizeof(int));
    return A;
}

void fillMatrix(int n, int *A){
    printf("Введите содержимое строки\n");
	for(int i=0; i<n; i++){
        printf("[0][%d] = ", i);
        scanf("%d",&A[i]);
    }
}

void printMatrix(int n,int *A){
	int *p;
    printf("Полученная строка:\n");
	p=A;
  	for(int i=0;i<n;i++){
    	printf("%d ", *p);
   	 	p++;
  	}
    printf("\n");
}

void multVector(int rows, int columns, int **A, int *B) {
    int **result = createDDMatrix(rows, columns);
    printf("Результат умножения:");
    for (int i = 0; i < rows; i++){
        printf("\n");
        for (int j = 0; j < columns; j++) {
            result[i][j] = A[i][0] * B[j];
            printf("[%d][%d] = %d\t", i, j, result[i][j]);
        }   
    }
    freeDDMatrix(rows, result);
}

void multMatrix(int rows, int columns, int *A, int **B){
    int *result = createMatrix(columns);
    printf("Результат умножения:\n");
        for (int j = 0; j < columns; j++) {
            result[j] = 0;
            for (int r = 0; r <=columns; r++)
                result[j] += A[r] * B[r][j];
            printf("[0][%d] = %d\t", j, result[j]);
        }
    free(result);
}