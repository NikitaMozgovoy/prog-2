#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 3
typedef struct Weather{
	union Data { double temperature; char characteristic[20]; int wind; }day;
	enum {t=1,c,w }x;
}Weather;

void Out(Weather today){
	if (today.x == t) printf("%lf \n", today.Data.temperature);
	if (today.x == c) printf("%s \n", today.Data.characteristic);
	if (today.x == w) printf("%d \n", today.Data.wind);
}
int main(){
	printf("Start\n");
	char custom;
	Weather* array = (Weather*)malloc(n*sizeof(Weather));
	for (int i = 0; i < n;i++){
		printf("Input data Type(temperature(t),characteristic(c),wind(w)\n");
		scanf("%s", &custom);
		if (custom == 't'){
			printf("temperature(Celsius) = ");
			scanf("%lf", &array[i].Data);
			array[i].x = 1;
		}
		if (custom == 'c'){
			printf("characteristic(word) = ");
			scanf("%s", &array[i].Data);
			array[i].x = 2;
		}
		if (custom == 'w'){
			printf("wind(m/sec) = ");
			scanf("%d", &array[i].Data);
			array[i].x = 3;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("Data %d = ", i);
		Out(array[i]);
	}
	free(array);
	printf("End\n");
	return 0;
}