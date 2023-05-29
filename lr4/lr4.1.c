#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("¬ведите два числа \n");
	int a,b;
	scanf("%d%d",  &a, &b);
	if (a%2==1) printf("%d - нечетное число", a);
		else printf("%d - нечетное число",b);
	return 0;
}	
