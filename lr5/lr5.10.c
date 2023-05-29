#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int a[3][3]={6,9,15,30,56,13,35,25,60},s;
	for (int i = 0; i < 3; i++){
		s=0;
	    for (int j = 0; j <3; j++){
	    	s+=a[i][j];
    	}
    	a[i][0]=s/3;
    }
	printf("[%d] [%d] [%d]\n",a[0][0],a[0][1],a[0][2]);
	printf("[%d] [%d] [%d]\n",a[1][0],a[1][1],a[1][2]);
	printf("[%d] [%d] [%d]\n",a[2][0],a[2][1],a[2][2]);
	return 0;
}	