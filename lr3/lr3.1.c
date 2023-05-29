#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	float a,b,s;
	printf("Введите а\n");
	scanf("%f",&a);
	printf("Введите b\n");
	scanf("%f", &b);
	float as=sqrt(a),bs=sqrt(b);
	s=((a+(1/as)*pow(b,3/2))/(a-b))*pow(((as-bs)/as)+(bs/(as-bs)),-1);
	printf("%f",s);
	return 0;
}	
