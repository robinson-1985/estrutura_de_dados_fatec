/* Crie um array numérica embaralhado com diversificação de números (200, 15, 10)… com no mínimo 20 números
e no máximo 100 (não repetidos). Ordene esse array do menor para o maior número, exiba na tela o array
antigo e o array novo ordenado.*/

#include <stdio.h>

void ordenaDecrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i; j < tamanho - 1; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int vetor[] = {5,6,2,4,3,1,21,200,56,89,11,23,54,82,65,39,18,156,178,62};
    int tamanho = sizeof(vetor) / sizeof(int);

    printf("Vetor antes da ordenação: ");
    mostrarVetor(vetor, tamanho);
    printf("\n");

    ordenaDecrescente(vetor, tamanho);

    printf("Vetor depois da ordenação (decrescente): ");
    mostrarVetor(vetor, tamanho);
    printf("\n");

    return 0;

}
