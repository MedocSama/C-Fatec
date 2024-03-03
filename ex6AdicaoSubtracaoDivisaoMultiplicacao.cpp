//Escreva um programa para ler 2 valores inteiros e uma das seguintes opera��es 
//a serem executadas (codificada da seguinte forma: 1.Adi��o, 2.Subtra��o, 3.Divis�o, 4.Multiplica��o). 
//Calcular e escrever o resultado dessa opera��o sobre os dois valores lidos. 
//Observa��o: Considere que s� ser�o lidos os valores 1, 2, 3 ou 4.

#include <stdio.h>

int main() {
    int valor1, valor2, operacao;
    float resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o c�digo da opera��o (1.Adicao, 2.Subtracao, 3.Divisao, 4.Multiplicacao): ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = valor1 + valor2;
            printf("Resultado da Adicao: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 - valor2;
            printf("Resultado da Subtracao: %.2f\n", resultado);
            break;
        case 3:
            if (valor2 != 0) {
                resultado = (float)valor1 / valor2;
                printf("Resultado da Divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        case 4:
            resultado = valor1 * valor2;
            printf("Resultado da Multiplicacao: %.2f\n", resultado);
            break;
        default:
            printf("Operacao invalida! Use apenas os codigos 1, 2, 3 ou 4.\n");
    }

    return 0;
}
