#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int x[10], y[10],i;
	setlocale(LC_ALL, "");
	printf("������� 10 ����� \n");
	for(i=0; i<10; i++){
		scanf("%d", &x[i]);
	}
	printf("\n ��� ������������� ���������������� ������� \n");
	for(i=9;i>=0;i--){
		printf("%d ",x[i]);//����� ��� ���. �������
	}
	printf("\n � �������������� ���������������� ������� \n");
	for(i=9;i>=0;i--){
		y[i]=x[i]; //����� � ���. ��������
		printf("%d ",y[i]);
	}
	return 0;
}	