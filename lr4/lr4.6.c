#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите значения трех сторон \n");
	int a,b,c;
	scanf("%d%d%d",  &a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)) printf("Треугольник существует");
	else printf("Треугольник не существует");
	return 0;
}	
