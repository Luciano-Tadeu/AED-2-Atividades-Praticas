#include<stdio.h>
#include<stdlib.h>

void alterarValor(float vet[]){
    
    float percentual;
    
    printf("Digite o percentual de aumento (%%): ");
    scanf("%f", &percentual);
    
    percentual = percentual/100 + 1;
    
    for(int i = 0; i <= 4; i++){
        
        *(vet + i) *= percentual;
        
    }
    
}

int main(void){
    
    float valor[5] = {1, 1, 1, 1, 1};
    
    alterarValor(valor);
    
    for(int i = 0; i <= 4; i++){
        
        printf("%.2f\n", valor[i]);
        
    }
    
    
}