#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int main(){
  int *a,*b,*c;
  int k=0,i,n=12;
  a = (int*) malloc(n * sizeof(int));
  b = (int*) malloc(n * sizeof(int));
  c = (int*) malloc(n*sizeof(int));
  for(i = 0; i<n; i++){
    if((i==0)||(i==1))
      a[i]=1;
    else
      a[i]=a[i-1]+a[i-2];
  }
  for(i = 0; i<n; i++){
    if((i==0)||(i==1)||(i==2))
      b[i]=1;
    else
      b[i]=b[i-2]+b[i-3];
  }
  for(i=0; i<n; i++){
    for(int j=i+1;j<n;j++){
      if((a[i]!=a[i+1])&&(b[j]!=b[j+1])&&(a[i]==b[j])){
        c[k]=a[i];
        k++;
      }
    }
  }
  for(i=0;i<k;i++)
  printf("%d ",c[i] );
  free(a);
  free(b);
  free(c);
  return 0;
}
