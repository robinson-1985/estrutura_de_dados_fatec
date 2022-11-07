#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream>

typedef struct aluno {
    int ra; 
    struct aluno *prox; //dado do sistema
};

using namespace std;

int main() {

    aluno *topo = NULL, *aux;
    char op;

    do{
        printf("\nEscolha uma das opções: \n1: adicionar \n2: remover \n3: listar \n4: limpar \n5: Sair\n");
        op = getche ();
        switch (op) {
            case 1: 
                printf("\nAdicionar");
                aux = (aluno*)malloc(sizeof(aluno));
                printf("\nDigite o RA: ")
                if(topo == NULL)
                    aux ->proximo = NULL;
                else{
                    aux->proximo = topo;
                topo = aux;
                }
                break;
            case 2:
                printf("\nExcluir");
                if(topo == NULL)
                    printf("\n\nPilha vazia \n\n");
                else if(topo ->proximo == NULL){
                    free (topo);
                    topo = NULL;
                    printf("Item removido com sucesso. Agora a lista está vazia\n");
                }
                else {  
                        aux = topo;
                        topo = aux->proximo;
                        free (aux);
                        printf("\n\n Item removido com sucesso!");
                    }
                    break;
            case 3:
                 printf("\nListar");
                if(topo == NULL)
                    printf("\n\nPilha vazia \n\n");
                else{
                    aux = topo;
                    printf("\n");
                    while (aux != NULL) {
                        printf("RA: %d \n", aux->ra);
                    }
                }
                break;
            case 4:
                 printf("\nLimpar");
                if(topo == NULL)
                    printf("\nPilha vazia");
                else if (topo->proximo == NULL){
                    free (topo);
                    topo = NULL;
                    printf("\n\nItem removido com sucesso. Agora a lista está vazia\n");
                }else{
                    while(topo != NULL){
                        aux = topo;
                        topo = aux->proximo;
                        free (aux);
                    }
                    printf("\n\nItens removido com sucesso. Lista está vazia\n\n");
                }
                break;
            case 5:
                 printf("\nSair");
                if(topo == NULL)
                    printf("\nPilha vazia");
                else if (topo ->proximo == NULL){
                    free (topo);
                    topo = NULL;
                    printf("\n\nItem removido com sucesso. Agora a lista está vazia\n");
                } else{
                    while (topo != NULL){
                        aux = topo;
                        topo = aux->proximo;
                        free (topo);
                    }
                }
                break;
            default:
                printf("\nOpção inválida...");
        }
    }
    while(op != 5);
    return 0;
}
