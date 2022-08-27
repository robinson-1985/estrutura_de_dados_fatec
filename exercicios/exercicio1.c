/* Crie um código em C que deverá receber um número inteiro do usuário que deverá 
estar entre 0 e 100, e o mesmo irá retornar: Quantos números pares, quantos números 
ímpares e por último, quais e quantos números primos existem.*/

#include <stdio.h>

int main(){
    int numero = 0;
    int nPar = 0;
    int nImpar = 0;
    int nPrimo = 0;
    int resultado = 0;
    int i = 0;
    int continuar = 0;
    
    do{
        printf("Informe um valor: ");
        scanf("%d",&numero);
        
        while(numero<0 && numero>100){
            printf("Informe um valor: ");
            scanf("%d",&numero); 
        }
        if(numero%2==0){
            nPar++;
        }else{
            nImpar++;
        }
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                resultado++;
                break;
            }
        }
 
         if (resultado == 0)
            nPrimo++;
                
        printf("Deseja continuar: [1]Sim [0]Nao");
        scanf("%d",&continuar);
        
    }while(continuar != 0);
    
    printf("Numero par: %d\n", nPar);
    printf("Numero Impar %d\n", nImpar);
    printf("Numeros Primos %d\n", nPrimo);
  
}