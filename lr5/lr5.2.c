#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int x[10], y[10],i;
	setlocale(LC_ALL, "");
	printf("¬ведите 10 чисел \n");
	for(i=0; i<10; i++){
		scanf("%d", &x[i]);
	}
	printf("\n Ѕез использовани€ вспомогательного массива \n");
	for(i=9;i>=0;i--){
		printf("%d ",x[i]);//вывод без доп. массива
	}
	printf("\n — использованием вспомогательного массива \n");
	for(i=9;i>=0;i--){
		y[i]=x[i]; //вывод с доп. массивом
		printf("%d ",y[i]);
	}
	return 0;
}	