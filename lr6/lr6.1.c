#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
  double **pointer=NULL;
  pointer = (double **) malloc(sizeof(double *));
  pointer[0] = (double *) malloc(sizeof(double));
  *pointer[0]=2;
  printf("%f", *pointer[0]);
  free(pointer);
  return 0;
}
