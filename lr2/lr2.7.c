#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
char *locale = setlocale(LC_ALL, "");
printf("¬ведите число \n");
int n,s=0;
scanf("%d", &n);
while (n!=0){
	s+=n%10;
	n=n/10;
}
if (s>10){
	printf("¬ведите другое число \n");
	scanf("%d", &n);
}
else printf("%d",s);
return 0;
}
