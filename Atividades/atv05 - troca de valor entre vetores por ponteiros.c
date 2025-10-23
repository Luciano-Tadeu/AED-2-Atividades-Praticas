#include <stdio.h>

void copiarVet(int *a, int *b){
    
    for(int i = 0; i<=2; i++){
        
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
        
    }
    
}

int main()
{
    int a[3];
    int b[3];
    
    printf("Digite 3 valores para o vetor A: \n");
    
    for (int i = 0; i<=2; i++){
        
        scanf("\n%d", &a[i]);
        
    }
    
    printf("Digite 3 valores para o vetor B: \n");
    
    for (int i = 0; i<=2; i++){
        
        scanf("\n%d", &b[i]);
        
    }
    
    printf("Valores trocados entre A e B: \nA/B \n");
    copiarVet(a, b);
    
    for (int i = 0; i<=2; i++){
        
        printf("\n%d / %d", a[i], b[i]);
        
    }
    
}