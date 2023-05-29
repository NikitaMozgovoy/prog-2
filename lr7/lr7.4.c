#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void sr(int m[5][5]){
	int summ=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			if((i+j)>=5){
				summ=summ+m[i][j];
			}
		}
	printf("Среднее значение элементов ниже побочной диагонали равно %d", summ/10);
}
int main(){
	srand(time(NULL));
	char *locale =setlocale(LC_ALL, "");
	int S[5][5],i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			S[i][j]=rand()%10;
			printf("%d\t",S[i][j]);
		}
		printf("\n");
	}
	sr(S);
	return 0;
}	