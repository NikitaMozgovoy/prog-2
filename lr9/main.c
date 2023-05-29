#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "main.h"
int rows1,columns1,rows2, columns2;
int main(){
	char *locale=setlocale(LC_ALL, "");
	int choise1, choise2;
	printf("����� ������� �������?\n1-������ \n2-�� ������\n");
	scanf("%d",&choise1);
	if(choise1==1){
		printf("�������� ��� �������\n1-�������\n2-������\n");
		scanf("%d",&choise2);
		if(choise2==1){
			printf("������� ������ �������\n");
			scanf("%d", &rows1);
			columns1=1;
			int **A=createDDMatrix(rows1, columns1);
			fillDDMatrix(rows1,columns1, A);
			printf("������� ����� ������-�����������\n");
			scanf("%d",&columns2);
		    int *B = (int *) malloc(columns2 * sizeof(int));
			fillMatrix(columns2, B);
			printMatrix(columns2,B);
			multVector(rows1, columns2, A, B);
			freeDDMatrix(rows1, A);
			free(B);
		}
		else if(choise2==2){
			printf("������� ����� ������\n");
			scanf("%d", &columns1);
			rows1=1;
			int *A=createMatrix(columns1);
			fillMatrix(columns1, A);
			printMatrix(columns1, A);
			printf("������� ����������� �����������\n����� - ");
			scanf("%d",&rows2);
			if(columns1!=rows2){
				printf("��������� ����������!");
				return 1;
			}
			else{
				printf("�������� - ");
				scanf("%d",&columns2);
				int **B=createDDMatrix(rows2,columns2);
       			fillDDMatrix(rows2,columns2, B);
				printDDMatrix(rows2, columns2, B);
				multMatrix(rows1,columns2,A,B);
			}
		}
	}
	else if(choise1==2){
		printf("������� ����������� �������\nn = ");
		scanf("%d",&rows1);
		printf("m = ");
		scanf("%d", &columns1);
		int **A=createDDMatrix(rows1, columns1);
		fillDDMatrix(rows1,columns1, A);
		printDDMatrix(rows1, columns1, A);
		printf("��� �� ������ �������?\n"
	    "1 - �������� ������� �� ������-�������\n"
	    "2 - �������� ������� �� �������\n"
	    "������� 1 ��� 2\n");
	    scanf("%d", &choise2);
	    if (choise2 == 1) {
	        printf("������� ������ ������-�������:\nn = ");
	        scanf("%d", &rows2);
	        if (columns1 != rows2) {
	            printf("��������� ����������!");
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
	        printf("������� ����������� �������:\nn = ");
	        scanf("%d", &rows2);
	        if (columns1 != rows2) {
	            printf("��������� ����������!");
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