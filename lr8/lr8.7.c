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
	printf("Введите значение\n");
	int n;
	scanf("%d", &n);
	union space ex = {n};
	union space *point = &ex;
	printf("Значение указателя на экземпляр объединения при выводе типа int: %d \n", point->a);
	printf("Введите новое значение\n");
	scanf("%d", &point->a);
	printf("Значение экземпляра объединения после смены значения поля в указателе при выводе типа int: %d \n", ex.a);
	printf("Значение экземпляра объединения после смены значения поля в указателе при выводе типа char: %c \n", ex.b);
return 0;
}