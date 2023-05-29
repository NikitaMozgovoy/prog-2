#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, sum=0;
    scanf("%d", &a);
    while (a!=0) {
      sum=sum+a%10;
      a=a/10;
    }
    printf("The sum of the digits of the entered number is %d", sum);
    return 0;
}
		