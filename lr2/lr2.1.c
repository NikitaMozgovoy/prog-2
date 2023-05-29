#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
char *locale = setlocale(LC_ALL, "");
int r2=149500000, t1=687, t2=365,t;
float r1=3374.9, w2=2*M_PI/t2, w1=2*M_PI/t1;
for (t=0; t<=365; t+=10)
{
	float x=r1*cosf(w1*t)-r2*cos(w2*t);
	float y=r1*sinf(w1*t)-r2*sinf(w2*t);
	printf("Для t= %d%s%.0f%s%.0f%s" , t, " координаты Марса относительно земли равны (", x, "; " ,y , ") \n");
}
}
