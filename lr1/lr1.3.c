#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
float x,y,u;
printf("Enter x: ");
scanf("%f", &x,"\n");
printf("Enter y: ");
scanf("%f", &y,"\n");
float t=sinf(x+y);
u=(1+t*t)/(2+fabs(x-(2*x*x/(1+fabs(t)))));
printf("u=%f",u);
    return 0;
}
