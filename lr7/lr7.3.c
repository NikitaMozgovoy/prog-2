#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
float f(float a,float b){
	return pow(sin(log10(a*b)),2)+1/(sqrt(a*a+b*b));
}
int main(){
	char *locale =setlocale(LC_ALL, "");
	float k=3.6, m=2.2, n=5,r;
	r=f(n*m,k)+pow(f(n*k,n),2)-pow(f(m,n),3);
	printf("%f",r);
return 0;
}	