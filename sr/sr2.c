#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(float q){	
double s;
int m=1, c1=2400, t1=20, l1=340000, c2=4200, t2=100, l2=2256000, n=1;
s=(m*(c1*t1+l1+c2*t2+l2))/(q*n);
printf("%lf", s);
}
int main(){
printf("Needed mass of kerosene ");
f(40800000); printf(" kg \n");
printf("Needed mass of wood ");
f(10000000); printf(" kg \n");
printf("Needed mass of alcohol ");
f(27000000); printf(" kg");
return 0;
}