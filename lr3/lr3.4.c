#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
long int factorial(int count){
    int fact=1;
    for (int i=1;i<=count;i++)
        fact=fact*i;
    return fact;
}
int main(){
	char *locale = setlocale(LC_ALL, "");
	float p;
	int a,n;
	printf("¬ведите a и n \n");
	scanf("%d%d", &a,&n,"\n");
	p=(pow(a,n-1)/(factorial(n+1)));
	printf("%f",p);
	return 0;
}	