#include <assert.h>
#include <stdio.h>
int main ()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b); 
    printf("Their sum is ");
    printf ("%d", a + b);
    return 0;
}