#include <stdio.h>
#include <math.h>
/* Ограничение на X:
-1.25 < x < -0.4
При этом x != -1
Возьмём начальное значение Х = -1.2
Границой будет 0.45 с шагом 0.15
*/
int main(void) {
float x, h, f;
x = -1.2;
h = 0.15;
while (x <= -0.45) {
f = logf((2 - x * x) / sqrtf(4 * x + 5) - 1);
printf("f(%f) = %f\n", x, f);
x += h;
}
return 0;
}
