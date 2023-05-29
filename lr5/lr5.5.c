#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define n 3
int main(){
	int x[n][n],i,j;
	setlocale(LC_ALL, "");
  for (j = 0; j < n; j++){
    for (i = 0; i <n; i++){
    	printf("x[%d, %d] = ", i, j);
        scanf("%d", &x[i][j]);
    }
	}
    printf("\n");
	printf("[%d] [%d] [%d]\n",x[0][0],x[0][1],x[0][2]);
	printf("[%d] [%d] [%d]\n",x[1][0],x[1][1],x[1][2]);
	printf("[%d] [%d] [%d]\n",x[2][0],x[2][1],x[2][2]);
return 0;
}