#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float p,x;
scanf("%f", &x);
p=2*powf(x,4)-3*powf(x,3)+2*x*x+x+3;
printf("%f", p);
}
