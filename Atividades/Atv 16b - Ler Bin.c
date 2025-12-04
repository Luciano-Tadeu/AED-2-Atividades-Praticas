#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
} Aluno;

int main() {
    FILE *fp;
    Aluno alunos[5];

    fp = fopen("alunos.txt", "rb");
    if (!fp) {
        printf("Erro ao abrir o arquivo!\n");
    }

    fread(alunos, sizeof(Aluno), 5, fp);
    fclose(fp);

    printf("Dados lidos do arquivo:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n\n", alunos[i].idade);
    }

    return 0;
}
