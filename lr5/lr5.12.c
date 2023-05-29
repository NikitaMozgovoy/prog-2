#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int *a;
  int y,t,s=0,i,n=12,u=0;
  a = (int*) malloc(n * sizeof(int));
  for (i = 0; i<n; i++)  
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    if((i!=0)&&(i%2==1)) s++;
    if(abs(a[i])>abs(t)) t=a[i];
    if(a[i]<0) u+=a[i];
  }
  y=(u+t)*(s+2);
  printf("%d",y);
  free(a);
  return 0;
} 