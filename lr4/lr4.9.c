#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("������� ��� ����� \n");
	int a,b,c;
	scanf("%d%d%d",  &a,&b,&c);
	if((a>b)&&(a>c)) printf("%d - ���������� �����", a);
	if((b>a)&&(b>c)) printf("%d - ���������� �����", b);
	if((c>b)&&(c>a)) printf("%d - ���������� �����", c);
	if((a==b)&&(b==c)) printf("��� ����� �����");
	return 0;
}	

