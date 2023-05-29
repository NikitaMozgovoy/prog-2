#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Введите x и y \n");
	int x,y;
	scanf("%d%d",  &x,&y);
	if((x>0)&&(y>0)) printf("Первая четверть");
	if((x<0)&&(y>0)) printf("Вторая четверть");
	if((x<0)&&(y<0)) printf("Третья четверть");
	if((x>0)&&(y<0)) printf("Четвертая четверть");
	return 0;
}	

