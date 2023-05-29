#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int i, size=10, pass, j, hold,n[10];
	for(i=0; i<10; i++){
		scanf("%d", &n[i]);
	}
	for (i = 0; i < size-1; i++){
		for (j = i+1; j < size; j++){
			if (n[i]>n[j]){
				hold = n[j];
				n[j] = n[i];
				n[i] = hold;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("%d ", n[i]);
	}
	return 0;
}	