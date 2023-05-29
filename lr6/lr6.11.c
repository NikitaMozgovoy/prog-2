#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int fact(int y) {
    int f=1;
    for(int i=1;i<=y;i++){
        f=f*i;
    }
    return f;
}
int a(int g, int h){
    int e=fact(g)/fact(g-h);
    return e;
}
int c(int m, int l){
    int q=fact(m)/(fact(l)*fact(m-l));
    return q;
}
int main(){
int n,k;
char *locale=setlocale(LC_ALL, "");
printf("Введите n \n");
scanf("%d",&n);
printf("Введите k \n");
scanf("%d", &k);
printf("Количество размещений равно %d \n", a(n,k));
printf("Количество сочетаний равно %d", c(n,k));
}