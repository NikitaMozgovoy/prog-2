#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
long double pi,s;
long double factorial(int count){
    int fact=1;
    for (int i=1;i<=count;i++)
        fact=fact*i;
    return fact;
}
long double f(int n){
for (int k=0;k<=n;k++){
	s+=((factorial(k)*4*(1103+26390*k))/(pow(factorial(k),4)*pow(396,4*k)));
}
	pi=1/(s*(2*sqrt(2)/9801));
	return pi;
}
int main(){
	char *locale = setlocale(LC_ALL, "");
	printf("Äëÿ n=2, pi= %Lg%s", f(2), "\n");
	printf("Äëÿ n=3, pi= %Lg%s", f(3), "\n");
	printf("Äëÿ n=5, pi= %Lg%s", f(5), "\n");
	return 0;
}	