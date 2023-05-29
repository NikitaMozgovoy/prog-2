#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void min(int M[11],int N[11]){
	int min1=1000, min2=1000;
	for(int i=0;i<11;i++){
		if((M[i]<min1)&&(M[i]>0))
			min1=M[i];
		if((N[i]<min2)&&(N[i]>0))
			min2=N[i];
	}
	if(min1<min2) printf("Наименьшее положительное число обоих массивов равно %d", min1);
	else printf("Наименьшее положительное число обоих массивов равно %d", min2);
}
int main(){
	int M[11], N[11],i;
	char *locale =setlocale(LC_ALL, "");
	printf("Введите массив M\n");
	for(i=0;i<11;i++){
		scanf("%d", &M[i]);
	}
	printf("Введите массив N\n");
	for (i=0;i<11;i++){
		scanf("%d", &N[i]);
	}
	min(M,N);
	return 0;
}	