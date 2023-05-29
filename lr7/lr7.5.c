#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int n;
int tr(int C[n][n]){
	int s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) s+=C[i][j];
		}
	}
	return s;
}
void mprint(int C[n][n]){
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
}
}
int main(){
	srand(time(NULL));
	char *locale =setlocale(LC_ALL, "");
	printf("¬ведите размерность квадратных матриц\n");
	scanf("%d", &n);
	int a[n][n],b[n][n],i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=rand()%10;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			b[i][j]=rand()%10;
	if(tr(b)>tr(a)){
		printf("ћинимальный след имеет матрица A и он равен %d \n", tr(a));
		mprint(a);
	}
	else{
		printf("ћинимальный след имеет матрица B и он равен %d \n", tr(b));
		mprint(b);
	}
	return 0;
}	