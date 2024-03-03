#include <stdio.h>
int main()
{
float x, y, z, r;

printf("Digite o valor da largura:");
scanf("%f",&x);

printf("Digite o valor da altura:");
scanf("%f",&y);

printf("Digite o valor da comprimento:");
scanf("%f",&z);

r=x*y*z;

printf("O resultado da equação é: %f", r);

return 0;
}