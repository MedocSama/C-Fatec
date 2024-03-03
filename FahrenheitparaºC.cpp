#include <stdio.h>
int main()
{
    float x, r;

    printf("Digite o valor em Fahrenheit:");
    scanf("%f",&x);

    r=(x-32)/1.8;
    printf("O Valor em Graus Celsius:%.2f",r);
    return 0;
}