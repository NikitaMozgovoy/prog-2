#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
char *locale = setlocale(LC_ALL, "");
int a;
printf("a = ");
scanf("%d", &a);
if (a == 1)
printf("��� ����� 1");
else if (a == 2)
printf("��� ����� 2");
else if (a == 3)
printf("��� ����� 3");
else if (a == 4)
printf("��� ����� 4");
else if (a == 5)
printf("��� ����� 5");
return 0;
}
