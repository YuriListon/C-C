/*Programa que recebe o salário, calcula o percentual de aumento e mostra o novo valor.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float sal, perc, aumento, novo_sal;

    printf("Insira o salario:\n");
    scanf("%f", &sal);
    printf("Insira o percentual:\n");
    scanf("%f", &perc);

    aumento = sal * perc/100;
    novo_sal = sal +aumento;

    printf("Valor do aumento: %.2f.\n", aumento);
    printf("Valor do novo salario: %.2f.\n", novo_sal);

    system("pause");

    return 0;
}