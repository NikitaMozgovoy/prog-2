#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float s;
int v=200, a=58*M_PI/180, g=10, h=80;
float sina=sinf(a);
float cosa=cos(a);
s=(v*v*sina*cosa+v*cosa*sqrtf(v*v*sina*sina+2*g*h))/g;
printf("%f",s);
}
