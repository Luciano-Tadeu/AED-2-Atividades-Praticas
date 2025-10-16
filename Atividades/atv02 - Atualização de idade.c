/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void aposentar(int *sexo, int *idade);

int main(void){
    int idade, sexo;
    
    scanf("%d", &idade);
    
    scanf("%d", &sexo);
    
    aposentar(&sexo, &idade);
    
    printf("%d", idade);
    
}

void aposentar(int *sexo, int *idade)
    {
        if (*sexo == 1)
        {
            *idade = 65 - *idade;
            if (*idade <= 0)
            {
                *idade = 0;
            }
        }
        else
        {
            *idade = 60 - *idade;
            if (*idade <= 0)
            {
                *idade = 0;
            }
        }
    }