#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct example{
	unsigned int day:5;
	unsigned int month:4;
	unsigned int year:32;
};
int main(){
	int x,y,z;
	printf("Enter the day\n");
	scanf("%d",&x);
	printf("Enter the month\n");
	scanf("%d",&y);
	printf("Enter the year\n");
	scanf("%d",&z);
	if(((y%2==0)&&(y!=2)&&(y!=8)&&(x>30))||((y==8)&&(x>31))||(((y==2)&&(z%4!=0)&&(x>28))||((y==2)&&(z%100==0)&&(z%400!=0)&&(x>28))))
		printf("Unreal date");
	else{ 
		struct example code={x,y,z};
		printf("\n%d.%d.%d", code.day, code.month, code.year);
	}
return 0;
}		