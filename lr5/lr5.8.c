#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int c[2][2] = {0};
    int d[4][4] = {0};
    int a[2][4] = { 1, 2, 1, 3, 4, -1, 5, -1 };
    int b[4][2];
 
    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 2; j++)
            b[i][j] = a[j][i];
 
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) 
            for (int k = 0; k < 4; k++)
                c[i][j] += (a[i][k] * b[k][j]);
 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) 
            printf("[%d]", c[i][j]);
        printf("\n");
    }
 
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) 
            for (int k = 0; k < 2; k++)
                d[i][j] += (b[i][k] * a[k][j]);
 
    printf("-----------------------------------------------------\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) 
            printf("[%d]\t", d[i][j]);
        printf("\n");
    }
    return 0;
}
