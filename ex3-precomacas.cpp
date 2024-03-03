// As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas
// pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor total da compra. 

#include <stdio.h>

int main()
{
	int macas;
	float und, total;
	
	printf("Digite a quantidade de macas: ");
	scanf("%d", &macas);
	
	if(macas >=12){
		und = 0.25;
	}
	else{
		und = 0.35;
	}
	total = macas*und;
	
	printf("O Valor a pagar: R$ %.2f", total );
	return 0;
}
