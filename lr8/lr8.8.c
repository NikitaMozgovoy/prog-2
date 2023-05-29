#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union byteUnion{
	unsigned long num;
	unsigned char str[8];
}obj;

int main(){
	obj byte = {4294967295};
	for(int i=0; i<4;i++)
		printf("%ld\t", (int)byte.str[i]);
	return EXIT_SUCCESS;
}