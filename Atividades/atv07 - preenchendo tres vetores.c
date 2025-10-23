#include <stdio.h>

void copyMaior(int *a, int *b, int *c){

    for (int i = 0; i<=2; i++){

        if(*(a+i) >= *(b+i)){

            *(c+i) = *(a+i);

        }
        else{

            *(c+i) = *(b+i);

        }
    }

}

int main()
{
    int a[3];
    int b[3];
    int c[3];

    printf("Digite 3 valores para o vetor A: \n");
    
    for (int i = 0; i<=2; i++){
        
        scanf("\n%d", &a[i]);
        
    }
    
    printf("Digite 3 valores para o vetor B: \n");
    
    for (int i = 0; i<=2; i++){
        
        scanf("\n%d", &b[i]);
        
    }

    copyMaior(a, b, c);

    printf("Vetor C: \n");
    
    for (int i = 0; i<=2; i++){
        
        printf("\n%d", c[i]);
        
    }
}