#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f(float z,float s,float x){
float r;
r=(2.71*powf(10,6)*z*tan(log(s)*x)*tan(log(s)*x))/(expf(-s*tan(x))+fabs(z*x));
printf("for z= %.2f %s %.2f %s %.2f %s %.2f %s" , z, ", s=",s,", x= ", x,"r=",r,"\n");
}
int main(){
f(1.12,2.7,0.12);
f(1.12,2.7,0.14);
f(1.41,2.9,0.16);
}
