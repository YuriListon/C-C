#include <stdio.h>

int main() {
    
    int num1, num2, num3, soma;

    // Solicita ao usuário que insira os três números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Realiza a soma
    soma = num1 + num2 + num3;

    // Exibe o resultado
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
