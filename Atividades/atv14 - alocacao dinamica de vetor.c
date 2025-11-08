#include <stdio.h>
#include <stdlib.h>

void criarVetor(int **v, int a){

    *v = (int*) calloc(a, sizeof(int));

}

void ajustarVetor(int **v, int a){


    int verificar = 0;
    int *temp = (int*) realloc(*v, sizeof(int)*a);

    if(temp != NULL){
        *v = temp;
    }

    if(*v == temp){

        printf("Não mudou o local! \n");

    }
    else{

        printf("Mudou o local! \n");

    }

}

int main(void){

    int *vetD;

    int tamanho;

    printf("Digite o tamando do seu vetor: ");

    scanf("%d", &tamanho);

    criarVetor(&vetD, tamanho);

    if (vetD != NULL){

        printf("Vetor criado!");

    }

    printf("\nPreencha seu vetor: \n");

    for(int i = 0; i < tamanho; i++){

        scanf("%d", &vetD[i]);

    }

    for(int i = 0; i < tamanho; i++){

        printf("[%d] => %d\n", i, vetD[i]);

    }

    int alterarT;
    printf("Digite um valor para alterar o tamanho do vetor: ");
    scanf("%d", &alterarT);
    ajustarVetor(&vetD, alterarT);

    if(vetD != NULL){

        printf("Memória Realocada! Digite os novos valores: ");
        for (int i = 0; i < alterarT; i++){

            scanf("%d", &vetD[i]);

        }
        for(int i = 0; i < alterarT; i++){

        printf("[%d] => %d\n", i, vetD[i]);

        }
    }

}