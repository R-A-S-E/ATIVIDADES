#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float valor;
	int codigo;
	
	printf("Qual é o preço do produto: ");
	scanf("%f",& valor);
	printf("Código de origem: ");
	scanf("%d",& codigo);
	
	if(codigo == 1)
	{
		printf("o valor %.1f é do Sul",valor);
	}
	if(codigo == 2)
	{
		printf("o valor %.1f é do Norte",valor);
	}
	if(codigo == 3)
	{
		printf("o valor %.1f é do Leste",valor);
	}
	if(codigo == 4)
	{
		printf("o valor %.1f é do Oeste",valor);
	}
	if(codigo == 5||codigo ==6)
	{
		printf("o valor %.1f é do Nordeste",valor);
	}
	if(codigo == 7||codigo ==8||codigo ==9)
	{
		printf("o valor %.1f é do Sudeste",valor);
	}
	if(codigo >=10 && codigo <= 20)
	{
		printf("o valor %.1f é do Centro Oeste",valor);
	}
	if(codigo > 20)
	{
		printf("o valor %.1f é importado",valor);
	}
		
}
