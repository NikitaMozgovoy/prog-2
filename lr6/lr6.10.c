#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <malloc.h>
int i;
int fact(int n){
	int f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int fact2(int x){
    if (x == 0)
        return 1;
    else
       	return x * fact2(x - 1);
}
int main(){
int g;
scanf("%d",&g);
printf("%d\n",fact(g));
printf("%d",fact2(g));
return 0;
}