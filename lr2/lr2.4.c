#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
char *locale = setlocale(LC_ALL, "");
printf("¬ведите число \n");
int n,i;
scanf("%d", &n);
for (i=1; i<=n; i++){
	printf("%d ",i);
}
return 0;
}
