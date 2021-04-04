#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero[3];
	int result;
	
	printf("esse programa fala a media de 3 numeros\ne diz qual e menor que a media");
	printf("\n\nInforme o primeiro numero:");
	scanf("%d",& numero[0]);
	printf("Informe o segundo numero:");
	scanf("%d",& numero[1]);
	printf("Informe o terceiro numero:");
	scanf("%d",& numero[2]);
	result = numero[0]+numero[1]+numero[2];
	result = result/3;
	
	printf("A media dos numeros e:%d", result);
	if(numero[0]<result){
		printf("\nO priemiro numero %d e menor que a media",numero[0]);
	}
	if(numero[1]<result){
		printf("\nO segundo numero %d e menor que a media",numero[1]);
	}
	if(numero[2]<result){
		printf("\nO terceiro numero %d e menor que a media",numero[2]);
	}
	
	return 0;
}
