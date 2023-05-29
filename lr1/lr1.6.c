#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(float a,float b,float c,float x){
float r;
r=(b*c/12)*(6*x*x*powf(1-x/a,2)+b*b*powf(1-x/sinf(a),2));
printf("for a= %.2f %s %.2f %s %.2f %s %.2f %s %.2f %s" , a, ", B=",b,", C= ", c,", x=",x, " r=",r, "\n");
}
int main(){
f(1.7,2.1,3.4,1.05);
f(1.7,2.1,3.4,1.25);
f(1.9,2.5,3.9,1.75);
}
