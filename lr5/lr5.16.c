#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
  int **a;
  int i,n=3;
  a = (int **) malloc(n * sizeof(int *));
  for (i = 0; i < n; i++) {
  a[i] = (int *) malloc(n * sizeof(int));
}
  for(i=0; i<n; i++){ 
    for(int j=0;j<n;j++){
      if((i+j)%2==0)
        a[i][j]=1;
      else a[i][j]=0;
      printf("[%d] ",a[i][j]);
    }
    printf("\n");
  }
  free(a);
  return 0;
}
