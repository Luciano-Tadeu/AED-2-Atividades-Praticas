#include <stdio.h>
#include <stdlib.h>

void criarMatriz(int*** matriz, int qtdLinhas, int qtdColunas){

    *matriz = (int**) calloc(qtdLinhas, sizeof(int*));

    for(int i = 0; i < qtdLinhas; i++){

        (*matriz)[i] = (int*)calloc(qtdColunas, sizeof(int));

    }

    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){

            (*matriz)[i][j] = 0;
        }
    }

}

void realocarMatriz(int*** matriz, int qtdLinhas, int qtdColunas){


    *matriz = (int**) realloc(*matriz, qtdLinhas * sizeof(int*));

    for(int i = 0; i < qtdLinhas; i++){
            (*matriz)[i] = NULL;
    }

    for (int i = 0; i < qtdLinhas; i++){
        (*matriz)[i] = (int*)realloc((*matriz)[i], qtdColunas * sizeof(int));
    }

    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){

            (*matriz)[i][j] = 0;
        }
    }

}

int main(){


    int qtdLinhas, qtdColunas;
    int** matriz;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &qtdLinhas);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &qtdColunas);

    criarMatriz(&matriz, qtdLinhas, qtdColunas);

    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){

            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite a nova quantidade de linhas da matriz: ");
    scanf("%d", &qtdLinhas);
    printf("Digite a nova quantidade de colunas da matriz: ");
    scanf("%d", &qtdColunas);
    realocarMatriz(&matriz, qtdLinhas, qtdColunas);

    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){

            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }


}