#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int ra; 
    struct aluno *prox; //dado do sistema
};

int main() {
    int op;
    aluno *inicio = NULL, *fim, *aux;
    do{
        printf("\nEscolha uma das opções: \n1-Inserir\n2-Listar\n3-Remover\n4-Esvaziar\n5-Sair \n");
        scanf("%d", &op);
        switch (op) {
            case 1: 
                printf("\nInserir");
                aux = (aluno*)malloc(sizeof(aluno));
                if(aux == NULL) 
                    printf("\nErro: Sem memória para alocação");
                else{
                    printf("\nDigite o RA: ");
                    scanf("%d", &aux->ra);
                    aux->prox = NULL;
                    if(inicio == NULL)
                        inicio = aux;
                    fim = aux;
                }
            case 2:
                printf("\nListar");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio;
                    while(aux != NULL){
                        printf("\nRA: %d", aux->ra);
                        aux = aux->prox;
                    }
                }
                break;
            case 3:
                 printf("\nRemover");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 4:
                 printf("\nRemover");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 5:
                 printf("\nRemover");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            default:
                printf("\nOpção inválida...");
        }
    }
    while(op != 5);
    return 0;
}