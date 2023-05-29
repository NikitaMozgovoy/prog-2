#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int a[2][2]={1,2,3,0}, b[2][2],c[2][2];
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j <2; j++){
	    	b[i][j] = 0;
     		 for (int k = 0; k < 2; k++){
    		    b[i][j] += a[i][k] * a[k][j];
    		}
    	}
    }
    for (int i = 0; i < 2; i++){
	    for (int j = 0; j <2; j++){
	    	c[i][j]=-2*b[i][j]+5*a[i][j];
	    	if(i==j) c[i][j]+=9;
		}
	}
	printf("[%d] [%d] \n",c[0][0],c[0][1]);
	printf("[%d] [%d] \n",c[1][0],c[1][1]);
	return 0;
}	