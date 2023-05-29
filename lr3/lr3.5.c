#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	int p;
	scanf("%d", &p);
	printf("\n");
	for(int i=1;i<=p;i++){
		printf("%d", i);
		printf("\n");
	}
	return 0;
}	

