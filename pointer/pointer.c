#include<stdio.h>

int main(){
    float f;
    float *p; 

    f = 5.6;
    printf("\nValor de f  é %f\n", f);
    printf("\nO endereço de Valor de f é %p\n", f);

    p = &f;

    printf("\nValor do apontamento p %f", *p);
    printf("\nO endereço de apontamento de p é %p", p);
    printf("\nO endereço de p é %p", &p);

    *p = 9.8;

    printf("\nValor do apontamento p ", *p);
    printf("\nO endereço de apontamento de p é %p\n", p);
    printf("\nO endereço de p é %p", &p);
    printf("\nO valor de f é %f", f);

    getchar();
}