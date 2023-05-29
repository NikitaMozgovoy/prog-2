#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
  srand(time(NULL));
  char *locale=setlocale(LC_ALL, "");
	int a[10],n=10,i,j;
  printf("Для ");
	for(i=0;i<10;i++){
    a[i]=rand()%100;
    printf("%d ", a[i]);
  }
  printf("\nсортировка по возрастанию слева направо ");
  for (i = 0; i < n-1; i++){
    for (j = 0; j <n-i-2; j++){
      if (a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
	
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
  }
  printf("\nДля ");
  for(i=0;i<10;i++){
    a[i]=rand()%100;
    printf("%d ", a[i]);
  }
  printf("\nсортировка по убыванию слева направо ");
  for (i = 0; i < n-1; i++){
    for (j = 0; j <n-i-2; j++){
      if (a[j] < a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
  }
  printf("\nДля ");

  for(i=0;i<10;i++){
    a[i]=rand()%100;
    printf("%d ", a[i]);
  }
  printf("\nсортировка по возрастанию cправа налево ");
for (i = n-1; i >=1; i--){
    for (j = n-1; j>=n-i; j--){
      if (a[j - 1] > a[j]){
        int temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }
    } 
  }
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
}
  printf("\nДля ");

  for(i=0;i<10;i++){
    a[i]=rand()%100;
    printf("%d ", a[i]);
  }
  printf("\nсортировка по убыванию справа налево ");
for (i = n-1; i >=1; i--){
    for (j = n-1; j>=n-i; j--){
      if (a[j - 1] < a[j]){
        int temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }
    } 
  }
  for(i=0;i<n;i++){
    printf("%d ", a[i]);
}
return 0;
}