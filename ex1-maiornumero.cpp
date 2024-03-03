
//1)	Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e escrever o maior deles. 

#include <stdio.h>
int main()
{
	float v1,v2;
	
	printf("Digite o primeiro Valor: ");
	scanf("%f", &v1);
	
	printf("Digite o segundo Valor: ");
	scanf("%f", &v2);
	
	if(v1>v2){
		printf("v1 maior que v2 %.2f",v1);
	}
	else{
		printf("v2 maior que v1 %.2f",v2);
	}
	return 0;
}
