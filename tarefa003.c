#include <stdio.h>

int main(){
    int idade = 0;
    float peso = 0000;

    printf("Valor inicial de idade e ano é: %d\n", idade);

    printf("Digite uma idade\n");
    scanf("%d", &idade);
    printf("Digite seu peso.\n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %f.\n", peso);
}