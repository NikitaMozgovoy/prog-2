#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
char *locale=setlocale(LC_ALL, "");
  int *a;
  int *p;
  a = (int *) malloc(10 * sizeof(int *));
  for(int i=0; i<10; i++){
  	scanf("%d",&a[i]);
  }
  p=a;
  for(int i=0;i<10;i++){
    printf("%d ", *p);
    p++;
  }
  free(p);
  free(a);
  return 0;
}
