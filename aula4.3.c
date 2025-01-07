#include <stdio.h>

int main(){

    int d;

    printf("Insira um valor de 1 a 6:\n");
    scanf("%d", &d);

    switch (d){
    case 1:
    printf("Domingo.\n");
    break;

    case 2:
    printf("Segunda.\n");
    break;
    case 3:
    printf("Terça.\n");
    break;
    case 4:
    printf("Quarta.\n");
    break;
    case 5:
    printf("Quinta.\n");
    break;
    case 6:
    printf("Sexta.\n");
    break;
    
    default:/*qualquer valor fora de 1a 6 o resultado será sabado*/
    printf("Sabado.\n");
        break;
    }
}