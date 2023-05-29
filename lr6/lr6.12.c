#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int *a, *p;
int smena(int n){
  p=a;
  for(int i=0; i<(n/2); i++){
    int m = *p; 
    p++;
    int k=*p;
    *p=m;
    p--;
    *p=k;
    p=p+2;
  }
}
int main(){
char *locale=setlocale(LC_ALL, "");
  a = (int *) malloc(12 * sizeof(int *));
  p=a;
  for(int i=0; i<12; i++){
  	scanf("%d",&*p);
    p++;
  }
  smena(12);
  p=a;
  for(int i=0; i<12; i++){
    printf("%d ", *p);
    p++;
  }
  free(p);
  free(a);
  return 0;
}
