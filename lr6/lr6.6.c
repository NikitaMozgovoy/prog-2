#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>
int main(){
char *locale=setlocale(LC_ALL, "");
  int *a;
  int *p;
  srand(time(NULL));
  a = (int *) malloc(10 * sizeof(int));
  for(int i=0; i<10; i++){
  	a[i]=rand()%100;
    printf("%d ", a[i]);
  }
  p=&a[9];
  printf("\n");
  for(int i=0;i<10;i++){
    printf("%d ", *p);
    p--;
  }
  free(p);
  free(a);
  return 0;
}
