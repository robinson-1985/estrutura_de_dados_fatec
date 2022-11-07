#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0;
    int *p;
    int **pp;
    p = &x;
    pp = &p;

    printf("Valor da variavel x: %d\n", x);
    printf("Endereço da variavel x: %x\n\n", &x);

    printf("Endereço de p (&p): %x\n", &p);
    printf("Endereço onde P (P) aponta: %x\n", p);
    printf("Valor que p (*p) acessa: %d\n\n", *p);

    printf("Endereço de pp (&pp): %x\n", &pp);
    printf("Endereço de onde p (pp) aponta: %x\n", pp);
    printf("Valor que pp acessa (*pp) acessa: %d\n\n\n\n", **pp);

}
