#include <stdio.h>

void sacar(float *saldo, float *saldo_especial, float *saque);

int main(void){
    
    float saldo = 100, saldo_especial = 100, saque;
    
    
    printf("Cuiabank! \nDigite o valor do saque: ");    
    scanf(" %f", &saque);
    
    sacar(&saldo, &saldo_especial, &saque);
}

void sacar(float *saldo, float *saldo_especial, float *saque){

    if (*saque <= *saldo)
    {
        *saldo -= *saque;
        printf("\nSaque realizado no valor de %.2f saldo restante %.2f", *saque, *saldo);
    }
    else
    {
        if (*saque <= (*saldo + *saldo_especial))
        {
            *saldo -= *saque;
            *saldo += *saldo_especial;
            *saldo_especial = *saldo;
            *saldo = 0;
            printf("\nSaque realizado no valor de %.2f saldo restante %.2f, saldo especial restante %.2f", *saque, *saldo, *saldo_especial);
            
        }
        else
        {
            printf("\nNão é possível realizar o saque");
        }
    }
}