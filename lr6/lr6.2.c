#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
  int **pointer;
  pointer = (int **) malloc(2 * sizeof(int *));
  for(int i=0; i<2; i++){
  	pointer[i] = (int *) malloc(2 * sizeof(int));
  	*pointer[i] = pow(i+10,3)+12;
  }
  printf("%d", *pointer[0]+*pointer[1]);
  free(pointer);
  return 0;
}
