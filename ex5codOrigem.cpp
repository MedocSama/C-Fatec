//Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:

//c�digo 1 : Sul	c�digo 5 ou 6	: Nordeste
//c�digo 2 : Norte	c�digo 7, 8 ou 9 : Sudeste
//c�digo 3 : Leste	c�digo 10	: Centro-Oeste
//c�digo 4 : Oeste	c�digo 11	: Noroeste

//Observa��o: Caso o c�digo n�o seja nenhum dos especificados o produto deve ser encarado como Importado.


#include <stdio.h>

int main() {
    int codigo_origem;

    printf("Digite o c�digo de origem do produto: ");
    scanf("%d", &codigo_origem);

    switch (codigo_origem) {
        case 1:
            printf("Regi�o de proced�ncia: Sul\n");
            break;
        case 2:
            printf("Regi�o de proced�ncia: Norte\n");
            break;
        case 3:
            printf("Regi�o de proced�ncia: Leste\n");
            break;
        case 4:
            printf("Regi�o de proced�ncia: Oeste\n");
            break;
        case 5:
        case 6:
            printf("Regi�o de proced�ncia: Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Regi�o de proced�ncia: Sudeste\n");
            break;
        case 10:
            printf("Regi�o de proced�ncia: Centro-Oeste\n");
            break;
        case 11:
            printf("Regi�o de proced�ncia: Noroeste\n");
            break;
        default:
            printf("Produto importado\n");
    }

    return 0;
}
