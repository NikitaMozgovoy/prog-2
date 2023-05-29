#include <stdio.h>
#include <math.h>
#include <stdlib.h>
enum Day_of_week {
    Sunday,Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
}day1, day2, day3, day4, day5, day6, day7;
int main(){
	day1=Monday;
	day2=Tuesday;
	day3=Wednesday;
	day4=Thursday;
	day5=Friday;
	day6=Saturday;
	day7=Sunday;
	printf("Monday=%d, Tuesday=%d, Wednesday=%d, Thursday=%d, Friday=%d, Saturday=%d, Sunday=%d",
	day1, day2, day3, day4, day5, day6, day7);
return 0;
}	