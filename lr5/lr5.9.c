#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int a[2][2]={1,-1,-1,1}, b[2][2]={2,0,-3,1}, c[2][2]={3,-1,2,3}, ab[2][2],bc[2][2], p=0;
    for (int i = 0; i < 2; i++){
	    for (int j = 0; j <2; j++){
	    	ab[i][j] = 0;
            bc[i][j] = 0;
     		 for (int k = 0; k < 2; k++){
    		    ab[i][j] += a[i][k] * b[k][j];
                bc[i][j] += b[i][k] * c[k][j];
    		}
    	}
    }    
    printf("(A*B)*C \n"); 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j <2; j++){
            p = 0;
             for (int k = 0; k < 2; k++)
                p+= ab[i][k] * c[k][j];
                printf("[%d] ",p);
        }
        printf("\n");  
    } 
    printf("A*(B*C) \n"); 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j <2; j++){
            p = 0;
             for (int k = 0; k < 2; k++)
                p += a[i][k] * bc[k][j];
                printf("[%d] ",p);
        }
        printf("\n");
    } 
	return 0;
}