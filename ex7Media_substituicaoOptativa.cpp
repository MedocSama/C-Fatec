//Escreva um programa que leia as notas das duas avalia��es normais e a nota da avalia��o optativa. 
//Caso o aluno n�o tenha feito a optativa deve ser fornecido o valor -1. 
//Calcular a m�dia do semestre considerando que a prova optativa substitui a nota mais baixa entre as duas primeiras avalia��es. 
//Escrever a m�dia e mensagens que indiquem se o aluno foi aprovado, reprovado ou est� em exame, de acordo com as informa��es abaixo:

//Aprovado media >=6.0 
//reprovado: media < 3.0
//Exame	: media >= 3.0 e < 6.0


#include <stdio.h>

int main() {
    float nota1, nota2, optativa, media;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &nota2);

    printf("Digite a nota da avaliacao optativa (ou -1 se nao feita): ");
    scanf("%f", &optativa);

    
    if (optativa != -1) {
        if (nota1 > nota2) {
            nota2 = optativa;
        } else {
            nota1 = optativa;
        }
    }

    media = (nota1 + nota2) / 2;

    if (media >= 6.0) {
        printf("Aprovado! Media: %.2f\n", media);
    } else if (media < 3.0) {
        printf("Reprovado! Media: %.2f\n", media);
    } else {
        printf("Em Exame! Media: %.2f\n", media);
    }

    return 0;
}
