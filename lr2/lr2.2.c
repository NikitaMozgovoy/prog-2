#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int f(float z){
	return(pow(exp(1),z));
}
int main(){
	char *locale = setlocale(LC_ALL, "");
	int i,x,x1,n;
	float h,a,b,s=0;
	printf("Введите нижний предел, затем верхний\n");
	scanf("%f%f",&a, &b);
	printf("Введите количество разбиений\n");
	scanf("%d",&n);
	h=(b-a)/n;
	x=a;
	x1=a+h;
	for(i=1;i<=n;i++){
		s+=f(((x+x1)/2)*(x1-x));
		x=x1;
		x1+=h;
	}
	printf("Шаг равен %.3f%s", h, "\n");
	printf("Значение функции равно %f",s);
}
	