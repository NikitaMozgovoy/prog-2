#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
char *locale = setlocale(LC_ALL, "");
printf("¬ведите значени€ n и x\n");
int n,i,pr=1,x;
scanf("%d%d", &n, &x);
for (i=1; i<=n; i++){
	pr *=pow((1+(10+x)/x),1/i);
}
float z=-cos(0.1*pr*M_PI/180);
printf("%f", z);
return 0;
}
