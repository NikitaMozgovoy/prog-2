#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("¬ведите числа n и x\n");
	int n,k;
	float x,s=0;
	scanf("%d%f", &n, &x);
	for (k=3; k<=n; k++){
		s +=2*pow(x,3)*k+cos(k)*sqrt(x+1)-2.3/k;
	}
	float y=6.3*x-4*s;
	printf("%.3f", s);
	return 0;
}
