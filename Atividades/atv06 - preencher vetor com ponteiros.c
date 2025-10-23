#include <stdio.h>

int main(){

    int a[5];


    printf("Digite 5 valores para preencher o vetor A: \n");

    for(int i = 0; i<=4; i++){

        scanf("\n%d", &*(a+i));

    }

    printf("A = ");

    for(int i = 0; i<=4; i++){

        if (i <= 3){
            printf("%d, ", a[i]);
        }
        else{
            printf("%d", a[i]);
        }

    }


}