#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
  int *a;
  int s=1,r,i,q, n=12;
  float t;
  a = (int*) malloc(n * sizeof(int));
  for (i = 0; i<n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    if(a[i]<0) {r+=a[i];q=a[i];}
    if(a[i]>0) {s=s*a[i];}
  }
  free(a);
  t=1.0*(r+q+s)/(r*q*s+2);
  printf("%f",t);
  return 0;
} 