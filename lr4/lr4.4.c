#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите x и y \n");
	float r,x,y;
	scanf("%f%f",  &x,&y);
	printf("Введите радиус \n");
	scanf("%f",&r);
	if((x<=r)&&(y<=r)) printf("Эта точка принадлежит кругу");
	else printf("Эта точка не принадлежит кругу");
	return 0;
}	
