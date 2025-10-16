/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void alterarVar(int *var)
    {
        *var *= 2;
    }

int main(void){
    int var, copy;
    
    scanf("%d", &var);
    
    copy = var;
    
    printf("%d", copy);
    
    alterarVar(&var);
    
    printf("\n%d", var);
    
    printf("\n%d", copy);
    
}