#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("������� ����� \n");
	int x;
	scanf("%d",  &x);
	if(x%3==0) printf("����� ������ ����");
	else printf("������� �� ������� �� 3 =  %d",x%3);
	return 0;
}	
