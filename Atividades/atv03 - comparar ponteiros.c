#include <stdio.h>

int main(){

    int x = 10;
    float z = 10.5;

    int *a = &x;
    float *b = &z;

    if (*a > *((int*)b)){

        printf("A = %d", a);

    }

    else{

        printf("B = %d", b);

    }

}
