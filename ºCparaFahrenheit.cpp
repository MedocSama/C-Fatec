#include <stdio.h>
int main()
{
    float x, r;

    printf("Digite o Valor em Graus Celsius:");
    scanf("%f",&x);

    r=x*1.8+32;
    printf("O Valor em Fahrenheit:%.2f",r);
    return 0;
    }