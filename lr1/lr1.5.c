#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float x,y;
scanf("%f",&x);
y=-2*sqrtf(x*x+((4*x*x)/3))-((powf(cosf(x),4)/(x)));
printf("%f",y);
}
