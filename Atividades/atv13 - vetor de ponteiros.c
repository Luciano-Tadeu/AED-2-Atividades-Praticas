#include <stdio.h>
#include <stdlib.h>


int main(void){

    int a, b, c;

    int *vetPont[3] = {&a, &b, &c};

    printf("Digite o valor para a variável a: ");
    scanf("%d", &a);
    printf("Digite o valor para a variável b: ");
    scanf("%d", &b);
    printf("Digite o valor para a variável c: ");
    scanf("%d", &c);

    printf("Valores digitados: \n");

    for (int i = 0; i < 3; i++) {

        printf("%d\n", **(vetPont+i));

    }
}