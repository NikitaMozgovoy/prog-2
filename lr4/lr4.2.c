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
printf("Ваш номер 1");
else if (a == 2)
printf("Ваш номер 2");
else if (a == 3)
printf("Ваш номер 3");
else if (a == 4)
printf("Ваш номер 4");
else if (a == 5)
printf("Ваш номер 5");
return 0;
}
