#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите ограничение \n");
	int x=1, x1=0, i, m;
	scanf("%d",&m);
	for (i=1; i<=m; i++){
		x1+=x;
		x=x1;
		if (x1<m) printf("%d ",x1);
		else break;
	}
return 0;
}
