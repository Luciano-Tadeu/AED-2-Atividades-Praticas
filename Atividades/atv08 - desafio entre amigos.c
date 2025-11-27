#include<stdio.h>
#include<stdlib.h>

int main(void){
    
 float variavel = 7;
 float *a = &variavel;
 int multiplicando;
 
 scanf("%d", &multiplicando);
 
 *a = variavel*multiplicando;
 
 printf("%.2f", variavel);
 
 return 0;
}