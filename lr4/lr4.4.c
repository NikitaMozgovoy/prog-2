#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("������� x � y \n");
	float r,x,y;
	scanf("%f%f",  &x,&y);
	printf("������� ������ \n");
	scanf("%f",&r);
	if((x<=r)&&(y<=r)) printf("��� ����� ����������� �����");
	else printf("��� ����� �� ����������� �����");
	return 0;
}	
