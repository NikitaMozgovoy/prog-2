#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

union space{
	int a;
	char b;
};

int main(){
	char *locale=setlocale(LC_ALL, "");
	printf("������� ��������\n");
	int n;
	scanf("%d", &n);
	union space ex = {n};
	union space *point = &ex;
	printf("�������� ��������� �� ��������� ����������� ��� ������ ���� int: %d \n", point->a);
	printf("������� ����� ��������\n");
	scanf("%d", &point->a);
	printf("�������� ���������� ����������� ����� ����� �������� ���� � ��������� ��� ������ ���� int: %d \n", ex.a);
	printf("�������� ���������� ����������� ����� ����� �������� ���� � ��������� ��� ������ ���� char: %c \n", ex.b);
return 0;
}