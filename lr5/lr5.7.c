#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int a[2][3]={1,2,3,4,5,6}, b[3][2];
	printf("[%d] [%d] [%d] \n",a[0][0],a[0][1],a[0][2]);
	printf("[%d] [%d] [%d] \n\n",a[1][0],a[1][1],a[1][2]);
	for (int i = 0; i < 3; i++){
	    for (int j = 0; j <3; j++){
	    		b[i][j]=a[j][i];
    		}
    	}
	printf("[%d] [%d] \n",b[0][0],b[0][1]);
	printf("[%d] [%d] \n",b[1][0],b[1][1]);
	printf("[%d] [%d] \n",b[2][0],b[2][1]);
	return 0;
}	