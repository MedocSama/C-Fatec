#include <stdio.h>

int main()
{
    float x, y, r;

    printf("Digite o valor da P1:");
    scanf("%f",&x);
    printf("Digite o valor da P2:");
    scanf("%f",&y);

    r=(x+y)/2;
    printf("Resultado: %.2f", r);

    
    if(r>=6)
    {
        printf("Aprovado");
    
    }
    else 
    {
        printf("Reprovado");
    }
    return 0;
}