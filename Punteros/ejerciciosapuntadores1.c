// Cuales son los errores en el sigfuiente programa e indica que es lo que hace


#include <stdio.h>


int main(){

    // El objetivo de este prograa es operar con variables de manera indirecta

    int w = 10, x = 20, y = 30, z = 40, r1, r2, r3;
    int *p1,*p2,*p3,*p4;
    p1=&w;
    p2=&x;
    p3=&y;
    p4=&z;
    r1 = *p1 + *p2;
    r2 = *p3 + *p4;
    r3 = *p2 + *p3;
    
    printf("Los resultados son: %d, %d, %d, %d",r1,r2,r3);

    return 0;
}