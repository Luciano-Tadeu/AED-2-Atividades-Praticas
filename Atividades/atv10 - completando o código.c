#include<stdio.h>
#include<stdlib.h>

int main(void){

    int a = 17;
    int *ptr1 = &a;
    void **ptr2 = (void **) &ptr1;

    printf("%d", **(int**)ptr2);

}