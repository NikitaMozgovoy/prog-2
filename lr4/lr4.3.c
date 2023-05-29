#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите год \n");
	int n;
	scanf("%d",  &n);
	if (((n%100!=0)&&(n%4==0))||((n%100==0)&&(n%400==0))) printf("Високосный");
	else printf("Невисокосный");
	return 0;
}	
