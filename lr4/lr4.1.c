#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("������� ��� ����� \n");
	int a,b;
	scanf("%d%d",  &a, &b);
	if (a%2==1) printf("%d - �������� �����", a);
		else printf("%d - �������� �����",b);
	return 0;
}	
