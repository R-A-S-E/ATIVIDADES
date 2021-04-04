#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int inteiro = 0;
	
	printf("Digite um numero:");
	scanf("%d",& inteiro);
	if((inteiro)%2==0){
		printf("O numero eh par");
	}
	else{
		printf("O numero eh impar");
	}
	return 0;

}
