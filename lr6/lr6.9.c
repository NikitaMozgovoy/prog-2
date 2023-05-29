#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
int i, row = 0, col = 0,rows = 2, columns = 2, **arr,num;
char *locale=setlocale(LC_ALL, "");
arr = malloc(rows * sizeof(int*));
for(i = 0; i < rows; i++)
    arr[i] = malloc(columns * sizeof(int));

printf("\nВведите массив: \n");
while(scanf("%d", &num) == 1) {   
    arr[row][col] = num;
    if(++col == columns){
        row++;          
        col = 0;
        printf("\n");
    }
    if(row == rows)
    {
        puts("Матрица перегружена");
        break;
    }
}
for(row = 0; row < rows; row++){
    printf("\n");
    for(col=0;col<columns;col++){
        printf("%d ", arr[row][col]);
    }
}
return 0;
}