#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите значение x \n");
	int y,x;
	scanf("%d",  &x);
	if(x>0) {
		y=x-2;
		printf("Значение функции в этой точке равно %d", y);
	}
	else if(x<0) {
		y=abs(x);
		printf("Значение функции в этой точке равно %d", y);
	}
	else printf("Значение функции в этой точке равно 0");;
	return 0;
}	
