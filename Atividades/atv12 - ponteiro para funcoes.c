#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b){
    return a + b;
}

int main(void){

    int (*func1)(int, int);

    func1 = somar;

    int resultado = func1(2, 3);

    printf("Soma = %d", resultado);
}