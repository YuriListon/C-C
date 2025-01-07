#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome [TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    //criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //atribuindo valores aos campos

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlternando os campos via código:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //solicitando inserções via teclado

    printf("\nInsira um número inteiro: \n");
    scanf("%d", &pes.idade);
    printf("Insira um número real:\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra: \n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuário: \n");
    printf("pes.idade: %d\n", pes.idade);

    printf("\nAlteando os dados dos usuários:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
};

