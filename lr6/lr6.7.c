#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
char *locale=setlocale(LC_ALL, "");
  int *a, *p, *d;
  a = (int *) malloc(10 * sizeof(int *));
  p=a;
  for(int i=0; i<10; i++){
  	scanf("%d",&*p);
    p++;
  }
  for (p = a; p<&a[9]; p++){
    for (d = p+1; d<&a[10]; d++){
      if (*p>*d){
        int hold = *d;
        *d = *p;
        *p = hold;
      }
    }
  }
  p=a;
  for(int i=0; i<10; i++){
    printf("%d ", *p);
    p++;
  }
  free(p);
  free(a);
  return 0;
}
