#include <stdio.h>
#include <stdlib.h>

int SOMA(int x, int y, int z){
	int result;
	
	result=2*x+y-z;
	return result;
}
int main(){
	float n1,n2,n3;
	printf("Esse aplicativo vai retornar o '2x' o primeiro '+' o segundo e '-' o terceiro:");
	printf("\n\ndigite o primeiro numero:");
	scanf("%f",&n1);
	printf("digite o segundo numero:");
	scanf("%f",&n2);
	printf("digite o terceiro numero:");
	scanf("%f",&n3);
	
	printf("\nO resultado e %d", SOMA(n1,n2,n3));
	return 0;
}
