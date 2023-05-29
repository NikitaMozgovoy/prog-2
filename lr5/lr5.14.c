#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>
int main(){
int **a;
int n=3,m=5;
srand(time(NULL));
a = (int **) malloc(m * sizeof(int *));
for (int i = 0; i < m; i++) {
  a[i] = (int *) malloc(n * sizeof(int));
}
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++){
    a[i][j] = rand()%10;
    printf("[%d] ", a[i][j]);
  }
  printf("\n"); 
}
printf("\n\n");
free(a[2]);
a[2]=NULL;
for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++){
    if(a[i]!=NULL){
    printf("[%d] ", a[i][j]);
    }
  }
  if(i!=2)
  printf("\n"); 
}
  free(a);
  return 0;
}
  