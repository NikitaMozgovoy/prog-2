#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "main.h"
int rows1,columns1,rows2, columns2;
int main(){
	char *locale=setlocale(LC_ALL, "");
	int choise1, choise2;
	printf("Какую матрицу создать?\n1-Вектор \n2-Не вектор\n");
	scanf("%d",&choise1);
	if(choise1==1){
		printf("Выберите тип вектора\n1-Столбец\n2-Строка\n");
		scanf("%d",&choise2);
		if(choise2==1){
			printf("Введите высоту столбца\n");
			scanf("%d", &rows1);
			columns1=1;
			int **A=createDDMatrix(rows1, columns1);
			fillDDMatrix(rows1,columns1, A);
			printf("Введите длину строки-сомножителя\n");
			scanf("%d",&columns2);
		    int *B = (int *) malloc(columns2 * sizeof(int));
			fillMatrix(columns2, B);
			printMatrix(columns2,B);
			multVector(rows1, columns2, A, B);
			freeDDMatrix(rows1, A);
			free(B);
		}
		else if(choise2==2){
			printf("Введите длину строки\n");
			scanf("%d", &columns1);
			rows1=1;
			int *A=createMatrix(columns1);
			fillMatrix(columns1, A);
			printMatrix(columns1, A);
			printf("Введите размерность сомножителя\nСтрок - ");
			scanf("%d",&rows2);
			if(columns1!=rows2){
				printf("Умножение невозможно!");
				return 1;
			}
			else{
				printf("Столбцов - ");
				scanf("%d",&columns2);
				int **B=createDDMatrix(rows2,columns2);
       			fillDDMatrix(rows2,columns2, B);
				printDDMatrix(rows2, columns2, B);
				multMatrix(rows1,columns2,A,B);
			}
		}
	}
	else if(choise1==2){
		printf("Введите размерность матрицы\nn = ");
		scanf("%d",&rows1);
		printf("m = ");
		scanf("%d", &columns1);
		int **A=createDDMatrix(rows1, columns1);
		fillDDMatrix(rows1,columns1, A);
		printDDMatrix(rows1, columns1, A);
		printf("Что вы хотите сделать?\n"
	    "1 - Умножить матрицу на вектор-столбец\n"
	    "2 - Умножить матрицу на матрицу\n"
	    "Введите 1 или 2\n");
	    scanf("%d", &choise2);
	    if (choise2 == 1) {
	        printf("Введите высоту вектор-столбца:\nn = ");
	        scanf("%d", &rows2);
	        if (columns1 != rows2) {
	            printf("Умножение невозможно!");
	            return 1;
	        }
	        int columns2=1;
	        int **B=createDDMatrix(rows2,columns2);
	        fillDDMatrix(rows2,columns2, B);
	        multDDMatrix(rows1, columns2, rows2, A, B);
	        freeDDMatrix(rows1, A); 
	   		freeDDMatrix(rows2, B);
	    }
	    else if (choise2 == 2) {  
	        printf("Введите размерность матрицы:\nn = ");
	        scanf("%d", &rows2);
	        if (columns1 != rows2) {
	            printf("Умножение невозможно!");
	            return 1;
	        }
	        else{
	        	printf("m = ");
	        	scanf("%d", &columns2);
	        	int **B = createDDMatrix(rows2, columns2);
	        	fillDDMatrix(rows2, columns2, B);
	        	printDDMatrix(rows2, columns2, B);
	        	multDDMatrix(rows1, columns2, rows2, A, B); 
	        	freeDDMatrix(rows1, A);   
	    		freeDDMatrix(rows2, B);
	    	}
		}
	}
    	return EXIT_SUCCESS;
	}