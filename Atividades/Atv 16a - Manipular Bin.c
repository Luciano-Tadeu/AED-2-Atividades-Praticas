#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int id;
    char nome[50];
    int idade;
} Aluno;

int main() {

    FILE *fp;
    Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        alunos[i].id = i;
        strcpy(alunos[i].nome, "Aluno Teste");
        alunos[i].idade = 18 + i;
    }

    fp = fopen("alunos.txt", "wb");

    if (!fp) {
        printf("Erro ao abrir o arquivo!\n");
    }

    fwrite(alunos, sizeof(Aluno), 5, fp);
    fclose(fp);

    printf("Arquivo gravado com sucesso!\n");
    return 0;
}
