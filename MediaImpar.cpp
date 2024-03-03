#include <stdio.h>
int main()

{
    int x, y, r = 0, count = 0
    printf("Digite o primeiro valor:");
    scanf("%d",&x);

    printf("Digite o segundo valor:");
    scanf("%d",&y);

    if (x >= y) {
        printf("O valor de x deve se maior que y");
        return 1;  
    }
}