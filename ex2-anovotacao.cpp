//  Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga 
        //se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).  

#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite o ano de nascimento: "); 
    scanf("%d", &ano);

    int anoAtual = 2024;

    int idade = anoAtual - ano;

    if (idade >= 16) {
        printf( "Voce pode votar este ano!\n");
    } else {
        printf("Voce ainda nao pode votar este ano.\n");
    }

    return 0;
}

