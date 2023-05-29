#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct vector{
	int x,y,z;
	char name[20];
	int length;
}vect1, vect2;
int skmult(struct vector one, struct vector two){
	return(one.x*one.x+two.y*two.y+one.z*two.z);
}
double vectmult(struct vector one, struct vector two, int angle){
	double mult = one.length * two.length *sin(angle);
	return mult;
}
void vectprint(struct vector one){
	printf("������ %s (%d;%d;%d)\n", one.name, one.x, one.y, one.z);
}
int modul(struct vector one){
	int length=sqrt(one.x*one.x+one.y*one.y+one.z*one.z);
	return length;
}
int main(){
	char *locale=setlocale(LC_ALL, "");
	int angle;
	printf("������� �������� ������� �������\n");
	scanf("%s", &vect1.name);
	printf("���������� ������� %s:\n", vect1.name);
	scanf("%d%d%d", &vect1.x, &vect1.y, &vect1.z);
	printf("������� �������� ������� �������\n");
	scanf("%s", &vect2.name);
	printf("��������� ������� %s:\n", vect2.name);
	scanf("%d%d%d", &vect2.x, &vect2.y, &vect2.z);
	printf("������� ����\n");
	scanf("%d",&angle);
	vectprint(vect1);
	vectprint(vect2);
	vect1.length=modul(vect1);
	vect2.length=modul(vect2);
	printf("��������� ������������ %d\n",skmult(vect1, vect2));
	printf("��������� ������������ %f\n",vectmult(vect1, vect2, angle));
	printf("������ ������� %s %d\n", vect1.name, modul(vect1));
	printf("������ ������� %s %d", vect2.name, modul(vect2));
return 0;
}	