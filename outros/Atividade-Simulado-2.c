#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

	int A,B,C;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o lado A: ");
	scanf("%d",& A);
	printf("Informe o lado B: ");
	scanf("%d",& B);
	printf("Informe o lado C: ");
	scanf("%d",& C);
	
	
	if(A < (B+C) & B < (A+C) & C < (A+B))
	{
	
	 if(A == B && B == C)
	{
		printf("O triangulo � equil�tero");
		printf("\nPortanto, todo tri�ngulo equil�tero tamb�m, is�scele");
	}
	 else if(A==B||A==C||B==C)
	{
		printf("O triangulo � is�sceles");
	}
	else
	{
		printf("O triangulo � Escaleno");
	}
	
}
}
