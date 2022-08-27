#include <stdio.h>
#include <stdlib.h>

typedef struct produto {
    int nomeDoProduto; 
    struct produto *prox; //dado do sistema
};

int main() {
    int op;
    produto *inicio = NULL, *fim, *aux;
    do{
        printf("\nEscolha uma das opções: \n1-Eletrônico\n2-Comida\n3-Roupa\n4-Limpeza\n5-Frutas\n6-Leite\n7Frios\n8Carne\n9-Sair");
        scanf("%d", &op);
        switch (op) {
            case 1: 
                printf("\nEletrônico");
                aux = (produto*)malloc(sizeof(produto));
                if(aux == NULL) 
                    printf("\nErro: Sem memória para alocação");
                else{
                    printf("\nDigite o nome do produto: ");
                    scanf("%d", &aux->nomeDoProduto);
                    aux->prox = NULL;
                    if(inicio == NULL)
                        inicio = aux;
                    fim = aux;
                }
            case 2:
                printf("\nComida");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio;
                    while(aux != NULL){
                        printf("\nRA: %d", aux->nomeDoProduto);
                        aux = aux->prox;
                    }
                }
                break;
            case 3:
                 printf("\nRoupa");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 4:
                 printf("\nLimpeza");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 5:
                 printf("\nFrutas");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 6:
                 printf("\nLeite");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 7:
                 printf("\nFrios");
                if(inicio == NULL)
                    printf("\nFila vazia");
                else{
                    aux = inicio -> prox;
                    free(inicio);
                    inicio = aux;
                }
                break;
            case 8:
                 printf("\nCarne");
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
    while(op != 9);
    return 0;
}