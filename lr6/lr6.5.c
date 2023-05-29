#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
char *locale=setlocale(LC_ALL, "");
  int a, *p,f=1;
  scanf("%d",&a);
  p=(int *) malloc(sizeof(int));
  *p=a;
  for(int i=1;i<=*p;i++){
    f=f*i;
  }
  printf("%d",f);
  free(p);
  return 0;
}
