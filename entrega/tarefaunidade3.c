/*Tarefa para entrega referente a unidade 3, Instituto Hardware Brasil
Aluno Yuri Liston

Programa que lê um número inteiro positivo de 3 dígitos e gera a inversão do mesmo, exemplo: 456 e 654*/

#include <stdio.h>

int inverterNumero(int numero){
    int invertido = 0, resto;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }
    return invertido;
}

int main(){
    int numero, numeroInvertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &numero);
    if (numero >= 100 && numero <= 999){
        numeroInvertido = inverterNumero(numero);
        printf("O número invertido é: %d\n", numeroInvertido);
    } else {
        printf("Número inválido. Digite um número entre 100 e 999.\n");
        
    }
}