#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char titulo[100];
    char canal[50];
    char link[50];
    int duracao;
} Video;

int main() {

    FILE *fp;
    Video videos[5];

    for (int i = 0; i < 2; i++) {
        strcpy(videos[i].titulo, "Vídeo Teste");
        strcpy(videos[i].canal, "Canal Teste");
        strcpy(videos[i].link, "youtube.com");
        videos[i].duracao = 320;
    }

    for (int i = 2; i < 5; i++) {
        strcpy(videos[i].titulo, "Vídeo Teste2");
        strcpy(videos[i].canal, "Canal Teste2");
        strcpy(videos[i].link, "youtube.com");
        videos[i].duracao = 80;
    }

    fp = fopen("videos.txt", "w");

    if (!fp) {
        printf("Erro ao abrir o arquivo!\n");
    }
    for(int i = 0; i < 5; i++){
        fprintf(fp, "%s; %s; %s; %d\n", videos[i].titulo, videos[i].canal, videos[i].link, videos[i].duracao);
    }
    fclose(fp);

    printf("Arquivo gravado com sucesso!\n");
    return 0;
}