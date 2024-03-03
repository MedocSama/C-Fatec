//Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma pessoa,
// construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes f�rmulas:

//-	para homens : (72.7 * h) - 58
//-	para mulheres : (62.1 * h) - 44.7
//Observa��o: Altura = h (na f�rmula acima).


#include <stdio.h>

int main() {
    float altura, peso_ideal;
    int sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (1 para feminino, 2 para masculino): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f metros de altura � %.2f kg\n", altura, peso_ideal);
    } else if (sexo == 2) {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f metros de altura � %.2f kg\n", altura, peso_ideal);
    } else {
        printf("C�digo de sexo inv�lido. Use 1 para feminino ou 2 para masculino.\n");
    }

    return 0;
}

