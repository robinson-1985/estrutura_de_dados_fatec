/* Implemente em jogo usando a linguagem C que reconheça se a entrada de valores de uma matriz 10x10 representa um quadrado mágico ou não. Os valores serão somente de valores inteiros. Uma matriz de entrada é considerada uma quadrado mágico quando as seguintes regras:
A soma de cada linha é igual a soma de cada coluna que é igual a Soma da diagonal principal e também é igual a soma da diagonal secundária. Também não são aceitos valores repetidos entre os valores que serão digitados pelo usuário.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    int i, j, num;
    int matriz[10][10];

    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++){
            printf("Digite o elemento da posicao (%d,%d): ", i+1, j+1);
            scanf("%f", &num);
            matriz[i][j] = num;
        }
    
    getchar();
    pause();
}