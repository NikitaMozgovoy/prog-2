#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int f(int a, int b){
	return a*a*b;
}
struct example{
	int (*p) (int a, int b);
}obj={f};
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d", obj.p(a,b));
return 0;
}	