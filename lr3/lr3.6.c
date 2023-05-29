#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	float s;
	for(float x=0.6;x<=2.4;x+=0.1){
		s+=(sqrt(1.1*x*x+0.9))/(1.6+sqrt(0.8*x*x+1.4));
	}
	printf("%f",s);
	return 0;
}
