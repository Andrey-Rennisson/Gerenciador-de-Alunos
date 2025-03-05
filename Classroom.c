#include <stdio.h>

int main(){
    char nome[20];
    int idade, matricula;
    float altura;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite a altura do aluno: ");
    scanf("%f", &altura);

    printf("nome do aluno: %s\n", nome);
    printf("idade do aluno: %d\n", idade);
    printf("matricula do aluno: %d\n", matricula);
    printf("altura do aluno: %.2f\n", altura);
    
    return 0;
}