#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>
int main(){
char *locale=setlocale(LC_ALL, "");
srand(time(NULL));
  int **a;
  a = (int **) malloc(2 * sizeof(int *));
  for(int i=0; i<2; i++){
  	a[i] = (int *) malloc(2 * sizeof(int));
  	*a[i] = rand()%100;
  	printf("%d \n", *a[i]);
  }
  if(*a[0]>*a[1]) printf("Большее %d", *a[0]);
  else printf("Большее %d", *a[1]);
  free(a);
  return 0;
}
