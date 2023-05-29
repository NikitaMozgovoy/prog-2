#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(float a,float b,float c,float x){
float h;
h=-((x-a)/(powf(x*x+a*a,1/3)))-((4*powf(powf((x*x+b*b),3),1/4)/(2+a+b+powf(powf(x-c,2),1/3))));
printf("for a= %.2f %s %.2f %s %.2f %s %.2f %s %.2f %s" , a, ", B=",b,", C= ", c,", x=",x, " h=",h, "\n");
}
int main(){
f(0.12,3.5,2.4,1.4);
f(0.12,3.5,2.4,1.6);
f(0.27,3.9,2.8,1.8);
}
