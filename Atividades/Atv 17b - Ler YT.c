#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char titulo[100];
    char canal[50];
    char link[50];
    int duracao;
} Video;

int main() {
    FILE *fp;
    Video videos[5];

    fp = fopen("videos.txt", "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo!\n");
    }

    for(int i = 0; i < 5; i++){
        fscanf(fp, " %99[^;]; %49[^;]; %49[^;]; %d",
       videos[i].titulo,
       videos[i].canal,
       videos[i].link,
       &videos[i].duracao);
    }
    fclose(fp);

    printf("Dados lidos do arquivo:\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Título: %s\n", videos[i].titulo);
        printf("Canal: %s\n", videos[i].canal);
        printf("Link: %s\n", videos[i].link);
        printf("Duração: %ds\n\n", videos[i].duracao);
    }


    int escolha;

    printf("Exibir: \n1 - Vídeos com Duração Superior a 120s \n2 - Vídeos com Duração Inferior a 120s");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        for(int i = 0; i < 5; i++){
            if(videos[i].duracao >= 120){
                printf("Título: %s\n", videos[i].titulo);
                printf("Canal: %s\n", videos[i].canal);
                printf("Link: %s\n", videos[i].link);
                printf("Duração: %ds\n\n", videos[i].duracao);
            }
        }
        break;
    case 2:
        for(int i = 0; i < 5; i++){
            if(videos[i].duracao < 120){
                printf("Título: %s\n", videos[i].titulo);
                printf("Canal: %s\n", videos[i].canal);
                printf("Link: %s\n", videos[i].link);
                printf("Duração: %ds\n\n", videos[i].duracao);
            }
        }
        break;
    default:
        printf("Opção Inválida!");
        break;
    }

    return 0;
}
