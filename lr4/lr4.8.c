#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void tabl(int z){
for (int i=1;i<10;i++){
	printf("%d%s%d%s%d%s",i,"*",z," = ", z*i,"\n");
}
}
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("¬ведите число от 1 до 9 \n");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:tabl(1);break;
		case 2:tabl(2);break;
		case 3:tabl(3);break;
		case 4:tabl(4);break;
		case 5:tabl(5);break;
		case 6:tabl(6);break;
		case 7:tabl(7);break;
		case 8:tabl(8);break;
		case 9:tabl(9);break;
	}
	return 0;
}	
