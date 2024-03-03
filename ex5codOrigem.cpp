//Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela abaixo:

//código 1 : Sul	código 5 ou 6	: Nordeste
//código 2 : Norte	código 7, 8 ou 9 : Sudeste
//código 3 : Leste	código 10	: Centro-Oeste
//código 4 : Oeste	código 11	: Noroeste

//Observação: Caso o código não seja nenhum dos especificados o produto deve ser encarado como Importado.


#include <stdio.h>

int main() {
    int codigo_origem;

    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo_origem);

    switch (codigo_origem) {
        case 1:
            printf("Região de procedência: Sul\n");
            break;
        case 2:
            printf("Região de procedência: Norte\n");
            break;
        case 3:
            printf("Região de procedência: Leste\n");
            break;
        case 4:
            printf("Região de procedência: Oeste\n");
            break;
        case 5:
        case 6:
            printf("Região de procedência: Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Região de procedência: Sudeste\n");
            break;
        case 10:
            printf("Região de procedência: Centro-Oeste\n");
            break;
        case 11:
            printf("Região de procedência: Noroeste\n");
            break;
        default:
            printf("Produto importado\n");
    }

    return 0;
}
