#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int x[10], y[10]={0};
	char *locale=setlocale(LC_ALL, "");
	printf("¬ведите 10 чисел \n");
	for(int i=0; i<10; i++){
		printf("x[%d] = ", i);
    	scanf("%d", &x[i]);	
	}
	for(int i=0; i<10; i++){
		y[i]=x[i]*x[i];
		printf("%d ", y[i]);
	}
	return 0;
}