#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("������� �������� x \n");
	int y,x;
	scanf("%d",  &x);
	if(x>0) {
		y=x-2;
		printf("�������� ������� � ���� ����� ����� %d", y);
	}
	else if(x<0) {
		y=abs(x);
		printf("�������� ������� � ���� ����� ����� %d", y);
	}
	else printf("�������� ������� � ���� ����� ����� 0");;
	return 0;
}	
