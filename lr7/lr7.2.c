#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
float p(int k,float h){
	if(k==0) k++;
	return h/sqrt(k)-1;
}
int main(){
	srand(time(NULL));
	char *locale =setlocale(LC_ALL, "");
	int a[4][5],b[4][5],i,j;
	float d;
	printf("Array a\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%10;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			b[i][j]=rand()%10;
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nArray of d\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			d=pow(p(a[i][j],b[i][j]),3)-p(i,j);
			printf("%f\t", d);
		}	
		printf("\n");
	}
	return 0;
}	