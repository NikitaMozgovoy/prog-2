#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("¬ведите три числа \n");
	int a,b,c;
	scanf("%d%d%d",  &a,&b,&c);
	if((a>b)&&(a>c)) printf("%d - наибольшее число", a);
	if((b>a)&&(b>c)) printf("%d - наибольшее число", b);
	if((c>b)&&(c>a)) printf("%d - наибольшее число", c);
	if((a==b)&&(b==c)) printf("¬се числа равны");
	return 0;
}	

