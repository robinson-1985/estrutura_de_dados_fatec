#include<stdio.h>
#include<stdlib.h>

int main() {
    char *c;
    //cast em memória
    c = (char*) malloc(sizeof(char));
    if (c == NULL){
        printf("\nERRO: Sem memória");
    }else{
        //Alocação foi um sucesso
        *c = 'A';
        printf("\n O valor apontado por C é %c", *c);
         printf("\n O valor apontado por C é %p", c);

         free(c);
    }
    getchar();
}