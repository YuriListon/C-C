/*Um programa que recebe 4 números inteiros, calcula e mostra a soma deles*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int n1, n2, n3, n4, soma;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Informe o segundo numero:\n");
    scanf("%d", &n2);
    printf("Informe o terceiro numero:\n");
    scanf("%d", &n3);
    printf("Informe o quarto numero:\n");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("O resultado da soma igual a: %d.\n", soma);

    system("pause");
    
    return 0;
}