#include<stdio.h>
#include<stdlib.h>

int main(void){

    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Preencha a sua matriz[%d][%d]\n", linhas, colunas);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

            scanf("%d", (*(matriz + i) + j));

        }
    }

    printf("\n");

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

            printf("%d\t", *(*(matriz + i) + j));
        }
        printf("\n");
    }

}